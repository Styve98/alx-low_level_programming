#include "main.h"
/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 *
 * Return: nothing
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return (0);
}
