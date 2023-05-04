#include "main.h"
/**
 * set_bit - set bit at givin index to 1
 * @n: number to be modified
 * @index: index of the bit to be set
 * Return: 1 if successful, -1 if an error occured
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n |= (1 << index);
	return (1);
}
