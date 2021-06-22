#include "holberton.h"
/**
* main - functions prints string
*
* Return: 0
*/
int main(void)
{
  int s[9];
  s[9] = 'Holberton';
  int i = 0;
  for(i=0; s[i] != '\0'; i++)
    {
_putchar(s[i] + '0');
    }
 return (0);
}
