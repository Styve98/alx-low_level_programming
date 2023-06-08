#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the value that calculates the square root.
 *
 * Return: square root result.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - square root of a number after recursion.
 * @n: the value that calculates the square root.
 * @i: the value that iterates
 *
 * Return: square root result.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
