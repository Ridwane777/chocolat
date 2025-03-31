/*
** EPITECH PROJECT, 2025
** verifications
** File description:
** fonctions de verifiages des arguments
*/

#include "../include/my.h"

int print(char **map)
{
    for (int i = 0; map[i] != NULL; i++) {
        printf("%s\n", map[i]);
    }
    return 0;
}

int my_free(char **str)
{
    for (int i = 0; str[i] != NULL; i++) {
        free(str[i]);
    }
    free(str);
    return 0;
}

data_t *initializer(data_t *value)
{
    value->s_x = 0;
    value->sq_x = 0;
    value->s_y = 0;
    value->x_y = 0;
    value->sq_y = 0;
    value->moy_x = 0;
    value->moy_y = 0;
    value->a1 = 0;
    value->b1 = 0;
    value->a2 = 0;
    value->b2 = 0;
    value->rt_mean = 0;
    value->rt_mean2 = 0;
    value->r =  0;
    value->nb = 0;
    value->name = NULL;
    return value;
}

data_t *opr(int ac, char **av)
{
    data_t *donnees = malloc(sizeof(data_t));
    char **map = NULL;
    char **data = NULL;
    long double a = 0;
    long double b = 0;
    long double c = 0;
    long double d = 0;
    int year = 1960;
    int index = 0;

    donnees = initializer(donnees);
    if (check_args(ac, av) == -1)
        exit(84);
    map = lecture();
    for (int i = 2; i < 60; i++) {
        for (int j = 1; j < ac; j++) {
            index = recup_arg(map, av[j]);
            index = check_index(index);
            data = spe_str_to_word_array(map[index]);
            a += atof(data[i]);
        }
        donnees->s_x += year;
        donnees->sq_x += year * year;
        b += a / 1000000;
        c += year * (a / 1000000);
        d += (a / 1000000) * (a / 1000000);
        year++;
        a = 0;
    }
    donnees->s_y = b;
    donnees->x_y = c;
    donnees->sq_y = d;
    donnees->nb = (2017 - 1960 + 1) * (ac - 1);
    donnees->moy_x = (donnees->s_x / 58);
    donnees->moy_y = (b / 58);
    my_free(data);
    donnees = all_data(ac, av, donnees);
    return donnees;
}
