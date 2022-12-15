#include "main.h"

/**
 * more_numbers - prints number from 0 - 10 10 times
 */

void more_numbers(void)
{
int c, c1;

for (c = 0; c < 10; c++)
{
for (c1 = 0 ; c < 15; c++)
{
_putchar(c1 + '0');

}
_putchar('\n');
}
_putchar('\n');
}
