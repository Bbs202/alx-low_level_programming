#include <stdio.h>
/**
* main - prints alphabet in reverse order
*
* Return: 0
*/
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
