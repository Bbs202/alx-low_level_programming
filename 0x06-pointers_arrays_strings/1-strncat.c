#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
* _strncat - concatinates two strings
*
* @dest: string
* @src: string
* @n: integer
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i;
int j = 0;
while (dest[j] != '\0')
{
_putchar(*dest++);
}
_putchar(' ');
i = 0;
while (i <= n && src[i] != '\0')
{
_putchar(src[i - 1]);
i++;
}
_putchar('\n');
return (dest);
}
