#include <stdlib.h>
#include<stdio.h>
#include <time.h>
/**
 * main - A program to print whether a random number is positive or negative.
 *
 * Return: 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* if else loop */
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else if (n < 0)
{
	printf("%d is negative\n", n);
}
return (0);
}
