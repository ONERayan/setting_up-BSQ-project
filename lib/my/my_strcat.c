/*
** EPITECH PROJECT, 2024
** my_strcat
** File description:
** Write a function that concatenates two strings.
*/

char *my_strcat(char *dest, char const *src)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++) {
    }
    for (j = 0; src[j] != '\0'; j++) {
        dest[i] = src[j];
        i++;
    }
    return dest;
}
