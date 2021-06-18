#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - prints a-z
*
* Return: 0
*/
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
