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
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
