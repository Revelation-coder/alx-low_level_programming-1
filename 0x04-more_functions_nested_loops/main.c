#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_square(int size)
{
int l, c;
if (size > 0)
{
for (l = 1; l <= size; l++)
{
for (c = 1; c <= size; c++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}
