#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program to count digits of a number
 * Return: 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
