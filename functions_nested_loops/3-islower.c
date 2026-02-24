#include "main.h"
/**
 * returns 1 if c is lowercase
 * returns 0 otherwise
 */
int _islower(int c)
{
	char b = 'c'

	if (_islower(b))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
#include "main.h"  // si tu as un header, sinon tu peux juste mettre le prototype en haut

/**
 * _islower - vérifie si un caractère est en minuscule
 * @c: caractère à vérifier
 * Return: 1 si minuscule, 0 sinon
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}
