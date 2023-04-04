#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: first string
 * @dest: second string
 * sec: indicator that we started the second string
 *
 * Return: char pointer to the answer string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;
	bool sec = 0;

	while (1)
	{
		if (sec == 0)
		{
			if (*src == '\0')
			{
				sec = true;
				*src = *dest;
				src++;
				dest++;
			}
		}
		else
		{
			*src = *dest;
			if (*dest == '\0')
				break;
			src++;
			dest++;
		}
	}
	return (temp);
}
