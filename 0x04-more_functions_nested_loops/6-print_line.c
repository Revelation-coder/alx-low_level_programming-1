#include "main.h"

/**
 *print_line - prints a line
 *@n: number of _ that will be printed
 */

void print_line(int n)
{
int count;
if (n > 0)
{
for (count = 0; count < n; count++)
{
_putchar('_');
}
}
_putchar('\n');
}
