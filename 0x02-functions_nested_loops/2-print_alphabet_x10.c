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
}2-print_alphabet_x10.c~
int main(void)
{
print_alphabet_10x();
return (0);
}
