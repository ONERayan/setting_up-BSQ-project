/*
** EPITECH PROJECT, 2024
** my_strncpy
** File description:
** Write a function that copies n characters from a string into another.
*/

#include <unistd.h>

char *my_strncpy(char *dest, char const *src, int n)

{
    int i;

    for (i = 0; i != n && dest[i] != '\0'; i++) {
        dest[i] = src[i];
        }
        if (i < n) {
            dest[i] = '\0';
            }
        return dest;
}
