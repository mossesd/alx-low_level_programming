#include "main.h"
/**
 * _islower - checks if it is lower
 * @c: is the character to be checked
 * Return: always succes
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
