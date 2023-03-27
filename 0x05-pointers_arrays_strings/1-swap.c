#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first value to be swapped
 * @b: the second value to be swapped
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
