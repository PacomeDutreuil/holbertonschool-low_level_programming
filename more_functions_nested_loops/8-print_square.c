#include "main.h"

/**
 * print_square - imprime un carré de '#' de taille size
 * @size: taille du carré
 *
 * Retour: rien
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)  /* lignes */
	{
		for (j = 0; j < size; j++)  /* colonnes */
			_putchar('#');

		_putchar('\n');  /* fin de ligne */
	}
}
