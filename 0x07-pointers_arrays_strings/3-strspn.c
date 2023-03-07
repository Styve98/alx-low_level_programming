#include "main.h"
/**
 * _strspn - entry point
 * @s: input
 * @accept: input
 *
 * Return: nothing
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (0);
		}
		s++;
	}
	return (n);
}
