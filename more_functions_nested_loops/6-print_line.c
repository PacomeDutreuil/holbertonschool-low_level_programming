#include "main.h"

/**
 * print_line - dessine une ligne droite avec le caractère _
 * @n: nombre de fois que _ doit être imprimé
 *
 * Retour: rien
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
