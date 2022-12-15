#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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
void more_numbers(void)
{
int c, c1;

for (c = 0; c <= 10; c++)
{
for (c1 = 0 ; c1 < 15; c1++)
{
if (c1 >= 10)
{
_putchar((c1/10) + '0');
_putchar((c1%10) + '0');
}
else
{
_putchar(c1 + '0');
}
}
_putchar('\n');
}
}
void print_numbers(void)
{
  int count;

  for (count =0; count < 10; count++)
    {
      _putchar(count + '0');
	}
  _putchar('\n');
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
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
