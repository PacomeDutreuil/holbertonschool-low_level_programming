#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0'); /* affiche 0-9 */

	for (n = 0; n <= 5; n++)
		putchar(n + 'a'); /* affiche a-f */

	putchar('\n');

	return (0);
}
