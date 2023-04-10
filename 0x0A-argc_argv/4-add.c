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
 * is_digit - checks if a string is a digit
 * @s: string to check
 *
 * Return: 1 if string is a digit, 0 otherwise
*/
int is_digit(char *s)
{
	int i = 0;

	if (s[0] == '-')
		i++;
	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if given two arguments, 1 otherwise
*/
int main(int argc, char *argv[])
{
	int i, n;
	long int ans = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		n = _atoi(argv[i]);
		if (n > 0)
			ans += n;
	}
	printf("%ld\n", ans);
	return (0);
}
