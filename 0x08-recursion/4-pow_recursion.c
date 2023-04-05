#include "main.h"

/**
 * _pow_recursion - finds the power of a number
 * @x: the value to be powered
 * @y: the value  x is going to be powered to
 * Return: always success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
