#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
*struct printf_list - Structure pour les spécificateurs de format
*@specifieur: Le caractère spécificateur
*@manager: Pointeur vers la fonction qui gère ce spécificateur
*/
typedef struct printf_list
{
char specifieur;
int (*manager)(va_list);
} printf_t;
int _printf(const char *format, ...);
char _putchar(char c);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_pointer(va_list args);
#endif
