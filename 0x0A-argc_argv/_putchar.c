#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c:Ther character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned and error no is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
