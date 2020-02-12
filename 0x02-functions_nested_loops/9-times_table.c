#include "holberton.h"

/**
 *times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
int a, b, j, first_digit, last_digit;

for (a = 0 ; a <= 9 ; a++)
{
for (b = 0 ; b <= 9 ; b++)
{
j = a * b;
if (b != 0)
{
_putchar(',');
_putchar(' ');
}
if (j >= 10)
{
first_digit = j / 10;
last_digit = j % 10;
_putchar(first_digit + '0');
_putchar(last_digit + '0');
}
else if (j < 10 && b != 0)
{
last_digit = j % 10;
_putchar(' ');
_putchar(last_digit + '0');
}
else
{
last_digit = j % 10;
_putchar(last_digit + '0');
}
}
_putchar('\n');
}
}
