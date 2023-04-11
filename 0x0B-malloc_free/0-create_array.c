#include "main.h"
#include <stdlib.h>
/**
 * create_array - char *create_array(unsigned int size, char c
 * @size: array size
 * @c: char to initialize the array with
 *
 * Return: pointer to array if success,
 * NULL if size = 0 or if failed
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
