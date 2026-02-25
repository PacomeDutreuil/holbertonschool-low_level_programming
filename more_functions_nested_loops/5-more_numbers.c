#include "main.h"

/**
 * more_numbers - imprime 0 à 14, 10 fois, suivi d'un \n
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)  /* 10 lignes */
	{
		for (j = 0; j <= 14; j++)  /* chiffres de 0 à 14 */
		{
			if (j >= 10)  /* chiffres à deux chiffres */
				_putchar((j / 10) + '0');  /* première chiffre */
			_putchar((j % 10) + '0');      /* deuxième chiffre ou seul chiffre */
		}
		_putchar('\n');  /* fin de ligne */
	}
}
