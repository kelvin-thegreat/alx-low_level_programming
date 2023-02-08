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
    	ssize_t r, w;
   	char buf[letters];

    	if (!filename)
        	return 0;

    	fd = open(filename, O_RDONLY);
    	if (fd == -1)
        	return 0;

    	r = read(fd, buf, letters);

    	if (r == -1)
        	return 0;

    	r = write(STDOUT_FILENO, buf, r);
    	if (w == -1 || w != r)
        return 0;

    	close(fd);
    	return r;
}

