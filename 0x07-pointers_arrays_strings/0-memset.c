#include "main.h"

/**
 * _memset - fills memory area with a constant bytes
 * @s: is memory area pointed
 * @b: the constant going to fill s
 * @n: the amount of bytes to bel filled
 * Return: always succes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
