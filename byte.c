#include "main.h"
/*
*Fichier: fonctions_impression.c
*Description: Ce fichier contient des fonctions utilitaires pour l'impression
*de différents types de données (caractère, chaîne, pourcentage)
*d'une implémentation personnalisée de printf ou d'une fonction similaire.
*Ces fonctions sont conçues pour être utilisées avec une liste d'arguments
*variable (va_list) et retournent le nombre de caractères imprimés.
* onctions incluses:
*-print_char: Imprime un seul caractère
*-print_string: Imprime une chaîne de caractères
*-print_percent: Imprime le caractère '%'
*/
int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (!str)
str = "(null)";
while (str[count])
{
_putchar(str[count]);
count++;
}
return (count);
}
int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}
