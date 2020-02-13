#include "holberton.h"
/**
* print_numbers - Entry point
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{
char ch;
for (ch = '0' ; ch <= '9' ; ch++)
_putchar (ch);
_putchar ('\n');
return;
}
