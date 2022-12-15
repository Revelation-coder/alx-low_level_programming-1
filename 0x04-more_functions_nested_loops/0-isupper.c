#include "main.h"
#include <ctype.h>

/**
 * _isupper - tells if the char os upper or not
 * @c: is the character to be analysed
 * Return: return 1 if positive else return 0
 */

int _isupper(int c)
{
if (isupper(c + '0'))
{
return (1);
}
else
{
return (0);
}
