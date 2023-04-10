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
 * main - prints the minimum number of coins to make change for an amount of
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if given one argument, 1 otherwise
*/
int main(int argc, char *argv[])
{
	int i;
	long int ans = 0, left = 0, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = _atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		ans += cents / coins[i];
		left = cents % coins[i];
		cents = left;
	}
	printf("%ld\n", ans);
	return (0);
}
