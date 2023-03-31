#include "main.h"
#include <stdlib.h>
#include <time.h> 
#include <string.h>
/**
 * main - program to generate random valid passwords
 * len: length of string
 * str: string of characters
 * i: counter
 * 
 * Return: 0
 */

int main(void)
{
        char str [] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
        int len = strlen(str);
        int i;

        srand(time(NULL));
        for (i = 0; i < 10; i++)
        {
                printf("%c", str[rand() % (len - 1)]);
        }
        printf("\n");
        return (0);
}
