#include "main.h"


/**
 *puts2 - prints 2 by 2
 *@str: is the string
 */
void puts2(char *str)
{
int len, i;
len = 0;
i = 0;
while (str[len] != '\0')
len++;

while(i < len)
{
_putchar(str[i]);
i += 2;
}
 _putchar('\n');
}
