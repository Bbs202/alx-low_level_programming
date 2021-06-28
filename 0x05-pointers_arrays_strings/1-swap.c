#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**
* swap_int - swaps two integers
* @a: integer
* @b: integer
* Return: 0
*/

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
