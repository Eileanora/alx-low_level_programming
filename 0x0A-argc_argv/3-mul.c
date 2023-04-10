#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: integer value of string
*/
int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + s[i] - '0';
		i++;
	}
	return (sign * num);
}
/**
 * main - prints the product of two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if given two arguments, 1 otherwise
*/
int main(int argc, char *argv[])
{
	int i;
	long int ans;

	ans = 1;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
		ans *= _atoi(argv[i]);
	printf("%ld\n", ans);
	return (0);
}
