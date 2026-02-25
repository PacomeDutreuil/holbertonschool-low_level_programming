#include "main.h"

/**
 * print_diagonal - dessine une diagonale avec le caractère '\'
 * @n: nombre de fois que '\' doit être imprimé
 *
 * Retour: rien
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* imprime les espaces avant le \ */
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');  /* imprime le caractère de la diagonale */
		_putchar('\n');  /* fin de ligne */
	}
}
