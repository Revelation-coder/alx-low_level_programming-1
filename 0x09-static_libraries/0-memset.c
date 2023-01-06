#include "main.h"


/**
 *_memset - fills the memory with a constant byte
 *@s: is the pointer
 *@b: is the byte that is going to fill the memory
 *@n: number of spaces in the memory to be filled
 *Return: return the location of s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i <= n; n++)
{
s[i] = n;
}
return (s);
}
