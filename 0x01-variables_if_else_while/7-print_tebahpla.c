#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program to print the last digit of a number
 * Return: 0 (succes)
 */
int main(void)
{
	char alph_low[26];
	int i;

	for (i = 25; i >= 0; i--)
	{
		alph_low[i] = 'a' + i;
		putchar(alph_low[i]);
	}
	putchar('\n');
	return (0);
}
