#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* main - prints last digit of number
*
* Return: 0
*/
int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
last = n % 10;
if (last > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last);
}
else
if (last == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last);
}
else
if (last < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
}
else
printf("Invalid number");
return (0);
}
