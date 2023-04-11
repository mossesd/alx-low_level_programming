#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function used to create array
 * @size: the size to be created
 * @c: the value
 * Return: always succes
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
}
