#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual numbers it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
    	ssize_t read_chars, written_chars;
    	char *buf;

    	if (!filename)
        	return 0;

    	fd = open(filename, O_RDONLY);
    	if (fd == -1)
        	return 0;

    	buf = malloc(sizeof(char) * letters);
    	if (!buf)
        	return 0;

    	read_chars = read(fd, buf, letters);
    	if (read_chars == -1) 
	{
        	free(buf);
        	return 0;
    	}

    	written_chars = write(STDOUT_FILENO, buf, read_chars);
    	free(buf);
    	if (written_chars == -1 || written_chars != read_chars)
        	return 0;

    	return read_chars;
}
