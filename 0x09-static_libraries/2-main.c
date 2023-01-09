#include <stdio.h>

int main(void)
{
  int num;
  int fat;

  fat = 1;
  printf("Introduza uum numero: ");
  scanf("%d", &num);
  while(num > 0)
    {
      fat *= num;
      num--;
    }
  printf("O factorial de %d e %d\n", num, fat);

  return (0);
}
