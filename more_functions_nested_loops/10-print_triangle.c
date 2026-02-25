#include "main.h"

/**
 * print_triangle - imprime un triangle de '#' de taille size
 * @size: taille du triangle
 *
 * Retour: rien
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)  /* lignes */
	{
		/* espaces avant les # */
		for (j = 0; j < size - i; j++)
			_putchar(' ');

		/* caractères # */
		for (j = 0; j < i; j++)
			_putchar('#');

		_putchar('\n');  /* fin de ligne */
	}
}
