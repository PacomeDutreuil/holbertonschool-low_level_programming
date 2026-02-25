#include <stdio.h>

/**
 * main - imprime les nombres de 1 à 100
 *         avec Fizz pour multiples de 3,
 *         Buzz pour multiples de 5,
 *         FizzBuzz pour multiples de 3 et 5
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");  /* espace entre les nombres/words */
	}
	printf("\n");

	return (0);
}
