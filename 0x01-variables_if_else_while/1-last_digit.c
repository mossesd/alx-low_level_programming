#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d greater than 5\n", n, last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	} else if (last_digit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, last_digit);
	}
	return (0);
}
