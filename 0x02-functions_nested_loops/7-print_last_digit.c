#include "holberton.h"
/**
* print_last_digit - check the code for Holberton School students.
* @b : variable
* Return: same variable as input.
*/
int print_last_digit(int b)
{
int a;
if (b >= 0)
a = b % 10;
else
a = (b % 10) * -1;
_putchar(a + '0');
return (a);
}
