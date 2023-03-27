#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) == '\0')
	{
		for (; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
}
