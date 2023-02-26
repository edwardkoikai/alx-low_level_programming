#include "main.h"

/**
 * print_alphabet -  prints the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char alph_low[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		alph_low[i] = 'a' + i;
		_putchar(alph_low[i]);
	}
	_putchar('\n');
}
