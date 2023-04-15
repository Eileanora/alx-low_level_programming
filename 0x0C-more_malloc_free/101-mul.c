#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _isdigit - checks if a string is a number
 * @s: string to check
 *
 * Return: 1 if string is a number, 0 otherwise
 */
int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of string
*/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * mul - multiplies two positive numbers
 * @s1: first number
 * @s2: second number
 *
 * Return: pointer to the result
*/
char *mul(char *s1, char *s2)
{
	int sz1, sz2, i, j;
	char *ans;

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	ans = calloc(sz1 + sz2, sizeof(char));

	if (ans == NULL)
		return (NULL);

	for (i = 0; i < sz1; i++)
	{
		for (j = 0; j < sz2; j++)
		{
			ans[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
			ans[i + j] += ans[i + j + 1] / 10;
			ans[i + j + 1] %= 10;
		}
	}
	return (ans);
}
/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char *ans;
	int i, sz1, sz2;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	sz1 = _strlen(argv[1]);
	sz2 = _strlen(argv[2]);
	ans = mul(argv[1], argv[2]);
	if (ans == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	while (i < sz1 + sz2 && ans[i] == 0)
		i++;

	if (i == sz1 + sz2)
	{
		printf("0");
		exit(0);
	}
	for (; i < sz1 + sz2; i++)
		printf("%d", ans[i]);
	printf("\n");
	free(ans);
	return (0);
}
