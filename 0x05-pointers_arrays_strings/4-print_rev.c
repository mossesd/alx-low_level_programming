#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int i = 0;
	int size;

	while (s[i] != '\0')
	{
		size = i;
		i++;
	}
	for (i = size; i >= size; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
