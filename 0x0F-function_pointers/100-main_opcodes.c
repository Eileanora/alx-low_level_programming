#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	bytes = atoi(argv[1]);
	p = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", p[i]);
		if (i < bytes - 1)
			printf(" ");
	}
	return (0);
}