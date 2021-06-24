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
  
if (n > 0)
{
for (r = 0; r < n; r++)
	
_putchar('_');
}
else
{
_putchar('\n');
}
_putchar('\n');
}
