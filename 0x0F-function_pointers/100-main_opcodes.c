#include <stdio.h>
#include <stdlib.h>
/**
  * main - ...
  * @argc: ...
  * @argv: ...
  *
  * Return: ...
  */

int main(int argc, char *argv[])
{
	int i, num_bytes;
	
	if (argc != 2) 
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	void *main_ptr = (void *)main;
	unsigned char *code_ptr = (unsigned char *)main_ptr;
	for (i = 0; i < num_bytes; i++) 
	{
		printf("%.2x", code_ptr[i]);
	}
	printf("\n");
	return 0;
}
