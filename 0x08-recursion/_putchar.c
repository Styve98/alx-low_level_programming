#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: the character to be written
 *
 * Return: On success, returns the character written.
 * On error, -1 is returned and errno is set appropriately.
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
