#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function that returns the sum of two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - FUnction that subtracts a number from another.
 * @a: The first number.
 * @b: The second number.
 * Return: The result of the subtraction.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that returns the product(multiplication) of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The result of the multiplication.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The result of the division action.
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function that performs modulus of numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of the two numbers.
 */

int op_mod(int a, int b)
{
	return (a % b);
}
