#include "main.h"

char _putchar(char c)
{
	_putchar(c);
	return c;
}
/*---------------------------------------------------------------------------------------------------------------------------*/
/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: target character
 *
 * Return: pointer to answer if found else NULL
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
/*------------------------------------------------------------------------------------------------------------------------------------*/
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}