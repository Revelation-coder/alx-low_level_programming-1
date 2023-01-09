#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 */

void print_triangle(int size)
{
int c, l;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (l = 1; l <= size; l++)
{
for (c = size; c >= 1; c--)
{
if (c <= l)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
