#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: source memory
 * @dest: destination memory
 * @n: size
 *
 * Return: pointer points to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
