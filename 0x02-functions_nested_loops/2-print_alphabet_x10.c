#include <stdio.h>
#include "main.h"

void print_alphabet_10x(void)
{
  char letter;
  int count;
  for (count = 0; count < 10; count++)
    {
      for(letter = 'a'; letter <= 'z'; letter++)
	{
	  putchar(letter);
	}
      putchar('\n');
    }
int main(void)
{
print_alphabet_10x();
return (0);
}
