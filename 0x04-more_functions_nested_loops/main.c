#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
	       }else
	       {
		 _putchar(' ');
	       }
	   }
	 _putchar('\n');
       }
   }
}

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
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
