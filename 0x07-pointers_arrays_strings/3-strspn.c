#include "main.h"


/**
 * _strspn - gets the length of a prefix string
 * @s: the string to be checked
 * @accept: the checker
 * Return: always succes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;
	i = 0;
	j = 0;
	
	while (s[i] != '\0')
	{
		bool = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				bool = 0;
				break;
			}
			j++;
		}
		if (bool == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
