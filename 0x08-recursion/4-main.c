#include <stdio.h>

char print_alphabet(char letter)
{
  
  if (letter == 'z')
    return (letter);
  putchar(letter);
  return (print_alphabet(++letter));

}

int main(void)
{
  putchar(print_alphabet('a'));
  putchar('\n');
  return (0);
}

