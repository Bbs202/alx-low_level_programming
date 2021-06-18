#include <stdio.h>
/**
* main - prints all alphabet except q and e
*
* Return: 0
*/
int main(void)
{
char c;
while (c != 'q' && c != 'e')
{
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
}
return (0);
}
