#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');       /* affiche le chiffre */

		if (n != 9)             /* ajoute ", " sauf après le dernier chiffre */
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
