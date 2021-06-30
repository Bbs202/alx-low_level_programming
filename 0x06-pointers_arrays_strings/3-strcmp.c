#include <string.h>
#include <stdio.h>
#include "holberton.h"

/**
* _strcmp - compairs two string
*
* @s1: string
* @s2: string
*
* Return: s1[i] - s2[i]
*/

int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
