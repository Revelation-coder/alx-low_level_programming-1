#include <stdio.h>
/**
 *print_message - print the message
 *print_alphabet - will print the alphabet in lowercase
 */
void print_message(void)
{
printf("_putchar\n");
}

void print_alphabet(void)
{
for(char letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

putchar('\n');
}
