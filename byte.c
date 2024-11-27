#include "main.h"
/*
* Fonctions d'impression pour une implémentation personnalisée de printf.
* Inclut des fonctions pour imprimer un caractère, une chaîne et le symbole '%'.
* Utilise va_list pour gérer les arguments variables.
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
