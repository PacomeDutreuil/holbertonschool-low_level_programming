#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * Return: Pointer to the newly concatenated string, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *new_str;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[len1] != '\0')
	len1++;
	while (s2[len2] != '\0')
	len2++;

	new_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (new_str == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	new_str[i] = s1[i];

	for (j = 0; j < len2; j++, i++)
	new_str[i] = s2[j];

	new_str[i] = '\0';

	return (new_str);
}
