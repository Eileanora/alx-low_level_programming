#include "main.h"
/**
 * _strcpy - copies string to another one
 * @src: string to copy
 * @dest: where to copy it
 * temp: temporary pointer at the beginning of dest
 * Return: a char pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (1)
	{
		*dest = *src;
		if (*src == '\0')
			break;
		src++;
		dest++;
	}
	return (dest);
}
