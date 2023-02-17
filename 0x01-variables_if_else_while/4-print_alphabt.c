#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - A program to prin alphabet letters apart from q and e
 * Return: 0 (succes)
 */
int main(void)
{
	char alph_low[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		alph_low[i] = 'a' + i;
		if (alph_low[i] != 'q' && alph_low[i] != 'e')
		{
			putchar(alph_low[i]);
		}
	}
	putchar('\n');
	return (0);
}
