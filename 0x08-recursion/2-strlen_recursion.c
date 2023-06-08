#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: the number of which a string is measured.
 *
 * Return: to length of string.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
