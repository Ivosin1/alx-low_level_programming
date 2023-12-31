#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 * the arithmetic operation requested by the user.
 * @s: Operator passed as an argument.
 * Return: A pointer to the function that matches
 * operator passed as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};


	int k = 0;


	while (ops[k].op != NULL && *(ops[k].op) != *s)
		k++;


	return (ops[k].f);
}
