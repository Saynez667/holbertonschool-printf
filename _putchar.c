#include "main.h"
#include <unistd.h>
/**
* _putchar - Écrit un caractère sur la sortie standard
* @c: Le caractère à écrire
* Description: Cette fonction écrit un seul caractère sur la sortie standard
* en utilisant la fonction système write.
* Return: Retourne 1 en cas de succès, -1 en cas d'erreur
*/
char _putchar(char c)
{
return (write(1, &c, 1));
}