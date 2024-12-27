/*
** EPITECH PROJECT, 2024
** setting_up
** File description:
** find biggest square
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

static char *get_file(char *name, square_t *square)
{
    struct stat buf;
    char *map = NULL;
    int fd = open(name, O_RDONLY);

    if (fd == 0)
        return NULL;
    stat(name, &buf);
    square->size = (int)buf.st_size;
    map = malloc(sizeof(char) * square->size + 1);
    if (map == NULL)
        return NULL;
    read(fd, map, square->size);
    map[square->size] = '\0';
    square->lenght = my_getnbr(map);
    square->width = square->size / square->lenght;
    square->width = square->width - 1;
    return map;
}

int **string_to_array_of_int(char *name, square_t *square)
{
    char *map = get_file(name, square);
    int **map_to_int = malloc(sizeof(int *) * (square->lenght + 1));

    if (map == NULL || map_to_int == NULL)
        return NULL;
    for (int i = 0; i < square->lenght; ++i) {
        map_to_int[i] = malloc(sizeof(int) * (square->width + 1));
        if (map_to_int[i] == NULL)
            return NULL;
        for (int j = 0; j < square->width; ++j) {
            map_to_int[i][j] = IS_POINT(map[OFFSET(i, j, square->width)]);
        }
    }
    free(map);
    return map_to_int;
}

static void check_coordonate(int **map_solved, coordonate_t *coordonate,
    int *prs_i, int *prs_j)
{
    if (*prs_i >= coordonate->i - coordonate->biggest + 1 &&
        *prs_i <= coordonate->i &&
        *prs_j >= coordonate->j - coordonate->biggest + 1 &&
        *prs_j <= coordonate->j) {
            my_printf("x");
        } else
            my_printf("%c", IS_POINT2(map_solved[*prs_i][*prs_j]));
}

static void print_solved_map(int **map_solved, square_t *square,
    coordonate_t *coordonate)
{
    int prs_i = 0;
    int prs_j = 0;

    for (prs_i = 0; prs_i < square->lenght; ++(prs_i)) {
        for (prs_j = 0; prs_j < square->width; ++(prs_j)) {
        check_coordonate(map_solved, coordonate, &prs_i, &prs_j);
        }
        my_printf("\n");
    }
}

int square_algo(int **map_solved, coordonate_t *coordonate, square_t *square)
{
    if (map_solved[square->a][square->b] == 1) {
            square->save_size = MAX;
            if (map_solved[square->a - 1][square->b] < square->save_size)
                square->save_size = map_solved[square->a - 1][square->b];
            if (map_solved[square->a][square->b - 1] < square->save_size)
                square->save_size = map_solved[square->a][square->b - 1];
            if (map_solved[square->a - 1][square->b - 1] < square->save_size)
                square->save_size = map_solved[square->a - 1][square->b - 1];
            if (square->save_size != MAX)
                map_solved[square->a][square->b] = square->save_size + 1;
        }
        if (map_solved[square->a][square->b] > coordonate->biggest) {
            coordonate->biggest = map_solved[square->a][square->b];
            coordonate->i = square->a;
            coordonate->j = square->b;
        }
    return 0;
}

void find_square(int **map_solved, square_t *square, coordonate_t *coordonate)
{
    square->save_size = 0;
    for (square->a = 1; square->a < square->lenght; ++(square->a)) {
        for (square->b = 1; square->b < square->width; ++(square->b))
            square_algo(map_solved, coordonate, square);
    }
    print_solved_map(map_solved, square, coordonate);
}

int trash_main(coordonate_t *coordonate, square_t *square,
    char **argv, int argc)
{
    int **map_solved;
    char **map = NULL;
    int pr_size = 0;

    if (argc == 3) {
        gen_map(argv, map, pr_size);
        return 0;
    } else if (argc == 2) {
        map_solved = string_to_array_of_int(argv[1], square);
        find_square(map_solved, square, coordonate);
    free(map_solved);
    return 0;
    } else
        return 84;
}

int main(int argc, char **argv)
{
    coordonate_t coordonate = {0};
    square_t square;

    trash_main(&coordonate, &square, argv, argc);
}
