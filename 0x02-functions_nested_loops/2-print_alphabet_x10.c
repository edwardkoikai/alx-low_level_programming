#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char alph_low[26];
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			alph_low[j] = 'a' + j;
			_putchar(alph_low[j]);
		}
		_putchar('\n');
	}
}
