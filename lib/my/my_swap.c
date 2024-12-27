/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** swap a et b
*/

#include <unistd.h>

void my_swap(int *a, int *b)

{
    int T = *a;

    *a = *b;
    *b = T;
}
