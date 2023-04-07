#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the value of argv
 * @argc: the number of command line arguments
 * @argv: the value of the command line arguments
 * Return: always succes
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
