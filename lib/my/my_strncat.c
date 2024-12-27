/*
** EPITECH PROJECT, 2024
** my_strncat
** File description:
** put caractere of string source a the end of the dest source
*/

#include <unistd.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++) {
    }
    for (j = 0; j != nb && src[j] != '\0'; j++) {
        dest[i] = src[j];
        i++;
    }
    if (j < nb) {
        dest[i] = '\0';
    }
    return dest;
}
