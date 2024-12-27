/*
** EPITECH PROJECT, 2024
** my_strcmp
** File description:
** compare 2 string
*/

#include <string.h>
#include "my.h"
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
    int size1 = my_strlen(s1);
    int size2 = my_strlen(s2);
    char *cp1 = malloc((size1 + 1) * sizeof(char));
    char *cp2 = malloc((size2 + 1) * sizeof(char));
    int i = 0;
    int result = 0;

    if (size1 != size2)
        return 0;
    my_strcpy(cp1, s1);
    my_strcpy(cp2, s2);
    for (i = 0; (cp1[i] != '\0' && cp2[i] != '\0') && (cp1[i] == cp2[i]); i++){
        i++;
    }
        result = cp1[i] - cp2[i];
        free(cp1);
        free(cp2);
        return result;
}
