#include "main.h"
/**
 * _isalpha - checks if it is alphabet
 * @c: is a character
 * Return: always succes
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

