#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
/**
* main - prints string
*
* Return: 0
*/
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n", 56);
return (1);
}
