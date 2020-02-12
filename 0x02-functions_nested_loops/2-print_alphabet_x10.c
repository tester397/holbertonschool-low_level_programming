#include "holberton.h"
/**
*print_alphabet_x10 - check the code for Holberton School students.
*
*Return: Always 0.
*/
void print_alphabet_x10(void)
{
int n = 1;
while (n <= 10)
{
int t = 'a';
while (t <= 'z')
{
_putchar(t);
t++;
}
t = 'a';
n++;
_putchar('\n');
}
return;
}
