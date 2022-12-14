#include "main.h"

/**
 *times_table - prints the result of the multiplication from 0 to 10
 */

void times_table(void)
{
int result, line, colum;

for (line = 0; line < 10; line++)
{
for (colum = 0; colum < 10; colum++)
{
result = line * colum;
if (result >= 10)
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
else
{
_putchar(result + '0');
}
if ((line * (colum + 1)) >= 10 && (colum != 9))
{
_putchar(',');
_putchar(' ');
}
else if ((line * (colum + 1)) < 10 && (colum != 9))
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
}
