#include "holberton.h"

/**
* rev_string - reverse string
* @s: string
* Return: 0
*/

void rev_string(char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}
for (i = i - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
