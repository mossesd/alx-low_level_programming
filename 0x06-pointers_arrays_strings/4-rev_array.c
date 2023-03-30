#include "main.h"
#include "runner.h"

/**
 * reverse_array - reverses the array of integers
 * @a: the array to be reversed
 * @n: the size of the array
 */

void reverse_array(int *a, int n)
{
	int j = 0;
	int b[n];

	for (int i = n - 1; i >= 0; i--;)
	{
		b[j] = a[i];
		j++;
	}
}
