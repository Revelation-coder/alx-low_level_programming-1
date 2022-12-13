#include <stadio.h>
int main(void);
void print_alphabet_x10(void);
void print_alphabet(void);
int _islower(int c);
int _isalpha(int c);
void _putchar(int n);
int print_sign(int n)
{
int value;
if (n > 0)
{
putchar('+');
value = 1;
}
else if (n == 0)
{
putchar('0');
value = 0;
}
else if (n < 0)
{
putchar('-');
value = -1;
}
return value;

}

