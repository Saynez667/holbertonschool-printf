# printf holberton
![ST-c_1x (2)](https://github.com/user-attachments/assets/a80f0aa5-ad1a-4fbc-ae7c-7e54aa2c176b)

Ce projet est une implémentation simplifiée de la fonction printf standard en C. Ce projet gère les spécificateurs de format de base tels que %c, %s, %d, %i, et %%.
## Fonctionnalités
Gestion des spécificateurs suivants :
- %c : Caractère
- %s : Chaîne de caractères
- %d et %i : Entiers
- %% : Caractère pourcentage
## Structure du Projet
Le projet se compose de plusieurs fichiers :
main.h : Fichier d'en-tête contenant les prototypes et la structures.
- _printf.c : Implémentation principale de la fonction
- byte.c contenant les fonctions d'impression spécifiques 
Fonction Principale : _printf
c
int _printf(const char *format, ...);

## Description
La fonction _printf produit une sortie formatée selon la chaîne de format spécifiée.
Paramètres
format : Chaîne de caractères contenant le texte à imprimer avec des spécificateurs de format optionnels
... : Arguments variables correspondant aux spécificateurs de format
## Retour
Nombre total de caractères imprimés
Fonctions d'impression spécifiques
 - print_char
Imprime un seul caractère.
 - print_string
Imprime une chaîne de caractères.
 - print_percent
Imprime le caractère pourcentage.
 - print_int
Imprime un entier.
## Compilation
Pour compiler le projet, utilisez :
-  gcc -Wall -Werror -Wextra -pedantic *.c -o printf
![Capture d’écran 2024-11-28 104817](https://github.com/user-attachments/assets/8f57f962-7628-4aad-bae6-1a792a9a1a6e)

## Utilisation
Incluez main.h dans votre programme et utilisez _printf comme vous le feriez avec printf.
