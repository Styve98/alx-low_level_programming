#include "main.h"

/**
 * _puts_recursion - prints a function to string
 * @s: the value that prints a string
 *
 * return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
