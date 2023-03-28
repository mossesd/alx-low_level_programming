#include "main.h"

/**
 * puts2 - prints some of the string
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] % 2 == 0)
	{
		_putchar(str[i]);
	}
}
