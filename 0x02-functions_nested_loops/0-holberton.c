#include "holberton.h"
/**
* main - putchar command
*
*/
int main(void)
{
char ch[] = "Holberton";
int i = 0;
while (i <= 8)
{
_putchar(ch[i]);
i++;
}
_putchar('\n');
return (0);
}
