#include "main.h"

/**
 *print_diagonal - drows a diagonal line
 *@n: number of times which the line will be printed
 */

void print_diagonal(int n)
{
int c, c1;
if (n > 0)
{
for (c = 0; c < n; c++)
{
for (c1 = 0; c1 <= c; c1++)
{

if (c1 == c)
{
_putchar('\\');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
