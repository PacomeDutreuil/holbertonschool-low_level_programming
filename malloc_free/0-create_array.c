#include "main.h"
/**
 * create_array - Creates an array of characters
 * and initializes it with a specific char.
 * @size: Size of the array
 * @c: Character to use for initialization
 * Return: Pointer to the array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	return (NULL);

	array = malloc(size * sizeof(char));
	if (array == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	array[i] = c;

	return (array);
}
