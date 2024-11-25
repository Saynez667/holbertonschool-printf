#include "main.h"
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);
while (*format)
{
if(*format != '%')
}
write(1,format, 1);



// Parcourir la chaîne de format
    // Gérer les différents cas : %c, %s, %%

    va_end(args);
    return (printed_chars);
}