#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
* _strcat - concatinates two strings
*
* @dest: string
* @src: string
*
* Return: dest
*/


char *_strcat(char *dest, char *src)
{
while (*dest)
{
_putchar(*dest++);
}
_putchar(' ');
while (*src)
{
_putchar(*src++);
}
_putchar('\n');
return (dest);
}
