#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed hexa decimal alphabets by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
