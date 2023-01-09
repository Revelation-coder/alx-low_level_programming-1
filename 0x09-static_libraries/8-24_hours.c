#include <stdio.h>
/**
 *jack_bauer - show minutes
 */
void jack_bauer(void)
{
int hour;
int minute;

for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
if ((hour >= 10) & (minute >= 10))
{
printf("%d:%d\n", hour, minute);
}
else if ((minute >= 10) & (hour < 10))
{
printf("0%d:%d\n", hour, minute);
}
else if ((minute < 10) & (hour < 10))
{
printf("0%d:0%d\n", hour, minute);
}
else if ((hour >= 10) & (minute < 10))
{
printf("%d:0%d\n", hour, minute);
}
}
}
}
