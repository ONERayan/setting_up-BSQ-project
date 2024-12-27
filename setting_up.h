/*
** EPITECH PROJECT, 2024
** setting_up
** File description:
** struct macro and prototype
*/

#ifndef SETTING_UP_H
    #define SETTING_UP_H
    #define IS_POINT(X) (((X) == '.') ? 1 : 0)
    #define IS_POINT2(X) ((X) ? '.' : 'o')
    #define OFFSET(i, j, width) ((i) * (width + 1) + (j))
    #define MAX 2147483647

typedef struct square {
    int lenght;
    int width;
    int size;
    int a;
    int b;
    int save_size;
} square_t;

typedef struct coordonate {
    int i;
    int j;
    int biggest;
} coordonate_t;

char **gen_map(char **argv, char **map, int pr_size);
int error_case(char *patern);
int print_generate_map(char **map, int pr_size);
#endif
