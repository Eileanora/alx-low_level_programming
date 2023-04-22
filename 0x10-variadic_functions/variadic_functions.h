#ifndef VARADIC_FUNCTIONS_H
#define VARADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct printer - struct printer
 * @symbol: symbol
 * @print: print function
*/
typedef struct printer
{
	char *symbol;
	void (*print)(va_list);
} printer;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
