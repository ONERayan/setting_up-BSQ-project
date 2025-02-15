/*
** EPITECH PROJECT, 2024
** my_compute_square_root
** File description:
** Write a function that returns the square root
*/

#include <unistd.h>

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0) {
        return 0;
    }
    while (i * i <= nb) {
        if (i * i == nb) {
            return i;
        }
        i++;
    }
    return 0;
}
