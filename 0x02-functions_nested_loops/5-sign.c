0;10;1c#include "main.h"
#include <stdio.h>
/**
 * print_sign - analyse a number if is positive or not
 * @n: is the value analysed
 * Return: is the status code
 */

int print_sign(int n)
{

if (n > 0)
{
putchar('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else if (n < 0)
{
putchar('-');
return (-1);
}

}
