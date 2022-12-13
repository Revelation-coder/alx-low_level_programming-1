
#include <stdio.h>
/**
 * print_sign - analyse a number if is positive or not
 * @n: is the value analysed
 * Return: is the status code
 */

int print_sign(int n)
{
  int value;
  if (n > 0)
{
putchar('+');
value = 1;
}
else if (n == 0)
{
putchar('0');
value = 0;
}
else if (n < 0)
{
putchar('-');
value = -1;
}
return value;
}
