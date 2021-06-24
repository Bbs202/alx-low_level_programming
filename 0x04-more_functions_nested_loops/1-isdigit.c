#include "holberton.h"

/**
* _isdigit - Checks for 0-9
* @c: The character to be checked
*
* Return: 1 for 0-9 or 0 for anything else
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}

return (0);
}
