#include <stdio.h>

int main(void)
{
  char alphabet [] = {
		      'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		      'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
		      'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		      'y', 'z'};
  int size;
  size = sizeof(alphabet);

 for(int c = 0; c < size; c++)
    {
      putchar(alphabet[c]);
      putchar('\n');
    };
  return (0);
} 
