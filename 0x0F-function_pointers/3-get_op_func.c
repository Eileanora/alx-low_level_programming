#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument to the program
 *
 * Return: pointer to the function that corresponds to the operator given as a
*/
int (*get_op_func(char *s))(int, int)
{
	int i;
	/* array of operations with their sympols */
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	/* loop through the array of operations */
	while (i < 5)
	{
		if (s[0] == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
