#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program to print the last digit of a number
 * Return: 0 (succes)
 */
int main(void)
{
	char alph_low[26], alph_up[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		alph_low[i] = 'a' + i;
	}
	for (i = 0; i < 26; i++)
	{
		alph_up[i] = 'A' + i;
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alph_low[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(alph_up[i]);
	}
	putchar('\n');
	return (0);
}
