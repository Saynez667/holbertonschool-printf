#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
* _printf - Fonction qui produit une sortie formatée
* @format: Chaîne de format qui spécifie comment les arguments
* Description: Implémentation simplifiée de la fonction printf standard
* Gère les spécificateurs %c (caractère), %s (chaîne), et %% (pourcentage)
*Return: Le nombre total de caractères imprimés
*/
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
write(1, format, 1);
printed_chars++;
}
else
{
format++;
if (*format == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
printed_chars++;
}
else if (*format == 's')
{
char *str = va_arg(args, char*);
while (*str)
{
write(1, str++, 1);
printed_chars++;
}
}
else if (*format == '%')
{
write(1, format, 1);
printed_chars++;
}
}
format++;
}
va_end(args);
return printed_chars;
}