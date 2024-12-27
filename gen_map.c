/*
** EPITECH PROJECT, 2024
** gen map
** File description:
** generate an array
*/

#include <stddef.h>
#include <unistd.h>
#include "include/my.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include "setting_up.h"
#include <stdio.h>

char **gen_map(char **argv, char **map, int pr_size)
{
    int size = my_getnbr(argv[1]);
    char *patern = argv[2];
    int size_p = my_strlen(patern);
    int index = 0;

    map = malloc(sizeof(char *) * (size + 1));
    pr_size = size;
    if (error_case(patern) == 1)
        return NULL;
    for (int i = 0; i < size; i++) {
        map[i] = malloc(sizeof(char) * (size + 1));
        for (int j = 0; j < size; j++) {
            map[i][j] = patern[index];
            index = 1 + index;
            index = index % size_p;
        }
        map[i][size] = '\0';
    }
    print_generate_map(map, pr_size);
    return map;
}

int error_case(char *patern)
{
    for (int b = 0; patern[b] != '\0'; b++) {
        if (patern[b] != '.' && patern[b] != 'o') {
            return 1;
        }
    }
    return 0;
}

int print_generate_map(char **map, int pr_size)
{
    for (int a = 0; a < pr_size; a++) {
        write(1, map[a], pr_size);
        my_putchar('\n');
    }
    return 0;
}
