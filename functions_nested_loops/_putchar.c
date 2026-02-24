#include <unistd.h>
#include "main.h"

/**
 * _putchar - écrit le caractère c sur stdout
 * @c: caractère à écrire
 *
 * Return: 1 en cas de succès
 *         -1 en cas d'erreur
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}