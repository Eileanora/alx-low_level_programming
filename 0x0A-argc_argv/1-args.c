#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
