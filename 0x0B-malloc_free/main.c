#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
*/
int _putchar(char *c)
{
	return (write(1, &c, 1));
}

/*---------------------------------------------------------------------------------------------------------------------------*/
/**
 * _strlen - checks the size of a given string
 * @str: string to check size of
 *
 * Return: size of string (int)
*/
int _strlen(char *str)
{
	int sz = 0;

	while (*str != '\0')
	{
		sz++;
		str++;
	}
	return (sz);
}
/**
 * str_concat - concatetenates two strings with null terminated
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new allocated space (sucess)
 * NULL on faliure
*/
char *str_concat(char *s1, char *s2)
{
	int sz1, sz2, i;
	char *ans;

	sz1 = _strlen(s1);
	sz2 = _strlen(s2);
	ans = malloc((sz1 + sz2) * sizeof(char) + 1);
	if (ans == NULL)
		return (NULL);

	for (i = 0; i < sz1; i++)
		ans[i] = s1[i];
	i = sz1;
	while (*s2 != '\0')
	{
		ans[i] = *s2;
		s2++;
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
/*------------------------------------------------------------------------------------------------------------------------------------*/

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}