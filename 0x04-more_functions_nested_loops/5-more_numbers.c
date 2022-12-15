#include "main.h"

/**
 * more_numbers - prints number from 0 - 10 10 times
 */

void more_numbers(void)
{
int c, c1;

for (c = 0; c < 10; c++)
{
for (c1 = 0 ; c1 < 15; c1++)
{
if (c1 >= 10)
{
_putchar((c1 / 10) + '0');
_putchar((c1 % 10) + '0');
}
else
{
_putchar(c1 + '0');
}
}
break_line();
}
}

/**
 *break_line - break the line
 */
void break_line(void)
{
_putchar('\n');
}
