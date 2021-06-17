#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
/**
* main - prints string
* write - print
*
* filedes: integer
* buf: string
* nbyte: integer
*
* Return: 0
*/
int write(int filedes, const char *buf, unsigned int nbyte);
int main(int args, char **argv)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 13);
return (1);
}
