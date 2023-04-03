#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination to be coppied to
 * @src: the source to be coppied from
 * @n: the size to be coppied
 * Return: always succes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
