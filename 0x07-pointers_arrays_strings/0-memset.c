#include "main.h"
#include <string.h>

/**
 *_memset - fills the memory with a constant byte
 *@s: is the pointer
 *@b: is the byte that is going to fill the memory
 *@n: number of spaces in the memory to be filled
 *Return: return the location of s
 */
char *_memset(char *s, char b, unsigned int n)
{
int **p;
memset(s, b, n);
return (s);
}
