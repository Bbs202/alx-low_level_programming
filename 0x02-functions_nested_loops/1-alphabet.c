#include "holberton.h"
/**
* main - prints lowercase alphabets
* print_alphabet - loops over the lower case alphabet
*
* Return: 0
*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
/**
* print_alphabet - loops over the lower case alphabet
*
* Return: 0
*/
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
