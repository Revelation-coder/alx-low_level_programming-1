#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
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
    more_numbers();
    return (0);
}
