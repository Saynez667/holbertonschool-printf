# printf
![ST-c_1x (2)](https://github.com/user-attachments/assets/a80f0aa5-ad1a-4fbc-ae7c-7e54aa2c176b)

This project is a simplified implementation of the standard printf function in C. This project handles 
basic format specifiers such as %c, %s, %d, %i, and %%.

## Features
Handling of the following specifiers:
- %c: Character
- %s: String
- %d and %i: Integers
- %%: Percentage character
## Project Structure
The project consists of several files:
main.h: Header file containing prototypes and structures.
- _printf.c: Main implementation of the function
- byte.c containing specific print functions
- Main Function: _printf
int _printf(const char *format, ...);
## Description
The _printf function produces formatted output according to the specified format string.
Parameters
format: Character string containing the text to print with optional format specifiers
...: Variable arguments corresponding to format specifiers
## Return
Total number of characters printed
Specific Print Functions
- print_char: Prints a single character.
- print_string: Prints a string of characters.
- print_percent: Prints the percentage character.
- print_int: Prints an integer.
## Compilation
To compile the project, use:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

![Capture d’écran 2024-11-28 104817](https://github.com/user-attachments/assets/8f57f962-7628-4aad-bae6-1a792a9a1a6e)

## Usage
Include main.h in your program and use _printf as you would with printf.

```c
#include "main.h"

int main() 

{
printf("Hello, c25 !\n");
return (0);
}
```
```
Hello, c25 !
```
## Man page

the command to access my page is :

```bash
man /.man_3_printf
```
## Flow chart

![Capture d'écran 2024-11-28 132922](https://github.com/user-attachments/assets/5e9d10ed-2f00-44a8-ae62-d5b036ebad91)

## AUTHORS
- [yassin-info](https://github.com/Yassin-info)
- [Saynez667](https://github.com/Saynez667)
