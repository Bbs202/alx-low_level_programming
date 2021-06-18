#include<stdio.h>
/**
* main - prints a-z and A-Z
*
* Return: 0
*/
int main(void)
{
char c;
char K;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c);
}
for (K = 'A'; K <= 'Z'; ++K)
{
putchar(K);
}
return (0);
}
