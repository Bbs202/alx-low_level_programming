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
printf("size of an int: %zu byte(s)\n", sizeof(intType));
printf("size of a float: %zu byte(s)\n", sizeof(floatType));
printf("size of a long int: %zu byte(s)\n", sizeof(longType));
printf("size of a long long int: %zu byte(s)\n", sizeof(unsignedLongIntType));
printf("size of a char: %zu byte(s)\n", sizeof(charType));

return (0);
}