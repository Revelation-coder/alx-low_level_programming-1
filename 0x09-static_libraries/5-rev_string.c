#include "main.h"

/**
 *rev_string - reverse a string
 *@s: is the string
 */
void rev_string(char *s)
{
int len, i;
char aux;
len = 0;
i = 0;

while (s[len] != '\0')
{
len++;
}
while (i < len--)
{
aux = s[i];
s[i++] = s[len];
s[len] = aux;
}
}
