/*
** EPITECH PROJECT, 2024
** my_getnbr
** File description:
** have the number of an string
*/
#include <unistd.h>
#include "my.h"

int my_getnbr(char const *str)
{
    int nb = 0;
    int signe = 1;
    int i = 0;

    for (int cnt; (!(str[i] >= 48 && str[i] <= 57)); i++) {
        if (str[i] == '-') {
            signe = -signe;
        cnt++;
        }
    }
    while (str[i] >= 48 && str[i] <= 57) {
        nb = nb * 10 + str[i] - '0';
        i++;
        }
        return nb * signe;
}
