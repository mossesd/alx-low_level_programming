#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * Return: always succes
 */

void print_most_numbers(void)
{
	for (int i = 48; i <= 57; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	return (0);
}
