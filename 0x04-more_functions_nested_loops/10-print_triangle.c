#include "main.h"

/**
 *print_triangle - print a triangle
 *@size: is the size of the triangle
 */
void print_triangle(int size)
{
int c, l;
if (size > 0)
{
for (l = size; l >= 0; l--)
{
for (c = 0; c < size; c++)
{
if (c >= l)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
if (l > 0)
{
_putchar('\n');
}
}
}
else
{
_putchar('\n');
}
}
