#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program to print the last digit of a number
 * Return: 0 (succes)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* if condition */
if (n > 5)
{
	printf("Last digit %d is %d and is greater than 5\n", n, n % 10);
}
else if (n == 0)
{
	printf("Last digit %d is %d and is 0\n", n, n % 10);
}
else if (n < 6 && n != 0)
{
	printf("Last digit %d is %d and is less than 6 and not 0\n", n, n % 10);
}
return (0);
}
