#include "main.h"


/**
 *puts2 - prints 2 by 2
 *@str: is the string
 */
void puts2(char *str)
{
int len, i;

while (str[len] != '\0')
len++;

for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}

}
