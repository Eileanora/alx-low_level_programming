#include "main.h"

/**
 * _islower - check if character is lowercase
 * @c: character to check
 *
 * Return: 1 if lowercase , 0 of uppercase
 */
int _islower(int c)
{
	if (c > 96)
		return (1);
	return (0);
}
