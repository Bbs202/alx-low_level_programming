#include<stdio.h>
/**
* main - displays function type
*
* Return: 0
*/
int main(void)
{
int intType;
float floatType;
long int longType;
long long int unsignedLongIntType;
char charType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(unsignedLongIntType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
