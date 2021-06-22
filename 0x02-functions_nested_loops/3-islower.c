
#include "holberton.h"
/**
* _islower - Retturn lower case character
*
* @c: value
*
* Return: 1
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
