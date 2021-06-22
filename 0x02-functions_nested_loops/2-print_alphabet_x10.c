#include "holberton.h"
/**
* main - prints alphabet 10 times
*
* Return: 0
*/
int main(void)
{
print_alphabet_x10();
return (0);
}
/* print_alphabet_x10 - loops over the alphabets 10 times
*/
void print_alphabet_x10(void)
{
  int i= 10;
  int j;
  while (i <= 10)
    {
      j = 'a';
      while (j <= 'z')
	{
	  _putchar(j);
	}
      j++;
    }
  _putchar('\n');
}
