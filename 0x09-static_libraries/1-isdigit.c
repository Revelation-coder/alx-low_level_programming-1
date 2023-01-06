#include "main.h"
#include <ctype.h>

/**
 * _isdigit - tells if a char is a digit or not
 *@c: is the char that will be analysed
 * Return: return 1 if true otherwise return 0
 */

int _isdigit(int c)
{
if (isdigit(c))
{
return (1);
}
else
{
return (0);
}
}
