#include "main.h"
#include "runner.h"

/**
 * _strncpy - copies a string
 * @dest: the destination
 * @src: the source 
 * @n: the number of bytes to be coppied
 * Return: Always succes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <=n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
