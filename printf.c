#include "main.h"
/**
*_printf - Fonction qui produit une sortie formatée
*@format: Chaîne de format qui spécifie comment les arguments
*Description: Implémentation simplifiée de la fonction printf standard
*Gère les spécificateurs %c (caractère), %s (chaîne), et %% (pourcentage)
*Return: Le nombre total de caractères imprimés
*/
int _printf(const char *format, ...)
{
va_list args;
int i = 0, j = 0, printed = 0;
printf_t printf_list[] = {
{'c', print_char},
{'s', print_string},
{'%', print_percent},
{0, NULL}
};
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
i++;
j = 0;
while (printf_list[j].specifieur != 0)
{
if (format[i] == printf_list[j].specifieur)
{
printed += printf_list[j].manager(args);
break;
}
j++;
}
if (printf_list[j].specifieur == 0)
{
printed += _putchar('%');
printed += _putchar(format[i]);
}
}
if (format[i] != '%')
printed += _putchar(format[i]);
i++;
}
va_end(args);
return (printed);
}
