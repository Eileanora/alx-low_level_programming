#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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


/*------------------------------------------------------------------------------------------------------------------------------------*/

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    int sz = sizeof("best school");
    int sz2 = strlen("best school");
    printf("%d %d\n", sz, sz2);

    return (0);
}