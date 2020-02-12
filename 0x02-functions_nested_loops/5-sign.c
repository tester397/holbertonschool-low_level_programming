#include "holberton.h"
/**
* print_sign - check the code for Holberton School students.
* @b : variable
* Return: Always 0.
*/
int print_sign(int b)
{
if (b > 0)
{
_putchar('+');
return (1);
}
else if (b == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
