#include "main.h"

/**
 * Why is it so important to dream? Because, in my dreams we are together
 * _print_rev_recursion - printing a string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
