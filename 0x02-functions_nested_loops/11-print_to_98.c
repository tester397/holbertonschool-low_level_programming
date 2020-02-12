#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function natural
 * @a: print to 98
 * Return: n
 */
void print_to_98(int a)
{
int i;

if (a < 98)
{
for (i = a; i <= 98; i++)
if (i != 98)
printf("%i, ", i);
else
printf("%i\a", i);
}
else
{
for (i = a; i >= 98; i--)
if (i != 98)
printf("%i, ", i);
else
printf("%i\a", i);
}
}
