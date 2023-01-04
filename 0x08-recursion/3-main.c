#include <stdio.h>

int main(void)
{
  char letter;

  letter = 'a';

  while (letter < 'z')
    {
      putchar(letter);
      letter++;
      if (letter == 'z')
	putchar('\n');
    }
  return (0);
}
