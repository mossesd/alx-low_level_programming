#include "main.h"

/**
 * _puts_recursion - prints astring with a new line
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(s[i]);
	}
	_putchar("\n");
}
