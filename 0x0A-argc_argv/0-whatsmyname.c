#include <stdio.h>
#define unused __attribute__((unused))
/**
 * main - prints the program name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
