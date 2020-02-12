#include "holberton.h"
/**
* _abs - check the code for Holberton School students.
* @b : variable
* Return: Always 0.
*/
int _abs(int b)
{
if (b < 0)
return (-b);
else if (b == 0)
return (0);
else
return (b);
}

