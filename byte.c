#include "main.h"
/**
*print_char - Imprime un seul caractère
*@args: Liste d'arguments contenant le caractère à imprimer
*
*Return: Nombre de caractères imprimés (toujours 1)
*/
int print_char(va_list args)
{
char c = va_arg(args, int);
return (_putchar(c));
}
/**
*print_string - Imprime une chaîne de caractères
*@args: Liste d'arguments contenant la chaîne à imprimer
*
*Return: Nombre de caractères imprimés
*/
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
/**
*print_percent - Imprime le caractère pourcentage
*@args: Liste d'arguments (non utilisée)
*Return: Nombre de caractères imprimés (toujours 1)
*/
int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}
int print_int(va_list args)
{
int n = va_arg(args, int);
int count = 0;
unsigned int num;
if (n < 0)
{
count += _putchar('-');
num = -n;
}
else
num = n;
if (num / 10)
count += print_int_recursive(num / 10);
count += _putchar((num % 10) + '0');
return (count);
}
int print_int_recursive(unsigned int n)
{
int count = 0;
if (n / 10)
count += print_int_recursive(n / 10);
count += _putchar((n % 10) + '0');
return (count);
}
