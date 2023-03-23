#include "main.h"

/**
 * _isdigit - checks if it is a digit
 * @c: the number to be checked
 * Return: Always succes
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


