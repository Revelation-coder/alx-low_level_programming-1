#include <unistd.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
  int count;

  for (count =0; count < 10; count++)
    {
      _putchar(count + '0');
	}
  _putchar('\n');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{
    print_numbers();
    return (0);
}
