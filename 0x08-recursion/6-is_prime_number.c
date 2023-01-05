#include "main.h"

in is_prime_number(int n)
{
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
      if ((n % ++is_prime_number(n)) == 0)
       {
         return 0;
       }
       else
       {
         return primeno(is_prime_number(n)++);
       }       
    }
}
