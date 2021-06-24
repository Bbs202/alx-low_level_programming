#include "holberton.h"

/**
* print_line - prints n numbers of _
*
* @n: integer
*
* Return: 0
*/

void print_line(int n)
{
int r;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (r = 1; r < n; r++)
{
_putchar('_');
}
}
_putchar('\n');
}
