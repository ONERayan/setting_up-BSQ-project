/*
** EPITECH PROJECT, 2024
** li
** File description:
** ko
*/
#include "my.h"
#include <unistd.h>

int my_isneg(int n)
{
    if (n >= 0){
        my_putchar('P');
        return 0;
    } else {
        my_putchar('N');
        return 0;
    }
}
