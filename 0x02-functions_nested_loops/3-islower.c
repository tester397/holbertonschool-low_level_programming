#include "holberton.h"
/**
* _islower - check the code for Holberton School students.
* @b : variable
* Return: Always 0.
*/
int _islower(int b)
{
if ((b >= 'a') && (b <= 'z'))
return (1);
else
return (0);
}
