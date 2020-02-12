#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
int a = 0;
while (a <= 23)
{
int b = 0;
while (b <= 59)
{
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
_putchar(':');
_putchar(b / 10 + '0');
_putchar(b % 10 + '0');
b++;
_putchar('\n');
}
a++;
}
return;
}
