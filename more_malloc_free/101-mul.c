#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - checks if string contains only digits
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * error - prints error and exits
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1 = 0, len2 = 0, i, j, carry, n1, n2, *result;
	int start = 0;

	if (argc != 3)
		error();

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit(num1) || !is_digit(num2))
		error();

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = malloc(sizeof(int) * (len1 + len2));
	if (!result)
		return (1);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			carry += result[i + j + 1] + (n1 * n2);
			result[i + j + 1] = carry % 10;
			carry /= 10;
		}
		result[i + j + 1] += carry;
	}

	while (start < len1 + len2 - 1 && result[start] == 0)
		start++;

	for (; start < len1 + len2; start++)
		printf("%d", result[start]);

	printf("\n");

	free(result);

	return (0);
}
