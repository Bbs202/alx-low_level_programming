#include "holberton"
/**
* print_sign - prints sign of a number
*
* @n: value
*
* Return: 1 if n is positive and 0 if n is negative
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (0);
}
else
{
_putchar(48);
return (0);
}
}
