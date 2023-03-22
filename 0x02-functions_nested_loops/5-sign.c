#include "main.h"

/**
 * print_sign - checks if no is negative
 * or positive
 * @n: the number declared
 * Return: returns one or zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
}
