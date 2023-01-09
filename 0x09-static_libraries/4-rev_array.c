#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the given array
 *@a: is the array
 *@n: is the length of the array
 */

void reverse_array(int *a, int n)
{
int c, aux;
c = 0;
while (c < n)
{
aux = *(a + c);
*(a + c) = *(a + (n - (c + 1)));
*(a + (n - (c + 1))) = aux;
c++;
if (n % 2 == 0 && n / 2 == c)
{
break;
}
else if (n % 2 != 0 && n / 2 == c)
{
break;
}
}
}
