#include "main.h"
/**
 * _strlen - Computes the length of a string
 * @s: Pointer to the string
 * Return: The length of the string (number of characters before '\0')
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}

	return (length);
}

