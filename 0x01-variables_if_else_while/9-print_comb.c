#include <stdio.h>
/**
* main - Entry point
* if
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
n = 0;
while (n <= 9)
{
putchar(n + '0');
if (n < 9)
{
putchar(',');
putchar(' ');
}
n++;
}
putchar('\n');
return (0);
}
