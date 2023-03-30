#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 * Return: always success
 */

int _strcmp(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		count1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		count2++;
		j++;
	}
	return (count1 - count2);
}
	
