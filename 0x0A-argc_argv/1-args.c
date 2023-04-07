#include <stdio.h>

/**
 * main - prints the value of argv
 * @argc: the number of command line arguments
 * @argv: the value of the command line arguments
 * Return: always succes
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
