#include "main.h"
/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 */
void print_triangle(int size)
{
int c, l;
if (size > 0)
{
for (l = 0; l < size; l++)
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
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
