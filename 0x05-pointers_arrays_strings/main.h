#include <unistd.h>

int _putchar(char c)
void reset_to_98(int *n);


int _putchar(char c)
{
	return (write(1, &c, 1));
}
