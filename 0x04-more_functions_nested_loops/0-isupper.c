#include "main.h"

/**
 * _isupper - checkes if the letter is capital
 * @c: the character going to bi checked
 * Return: always succes
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
