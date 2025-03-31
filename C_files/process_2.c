/*
** EPITECH PROJECT, 2025
** data_parsing
** File description:
** data_parsing
*/

#include "../include/my.h"

double coef_a(data_t *data)
{
    long double a_1 = (58 * data->x_y) - (data->s_x * data->s_y);
    long double a_2 = (58 * data->sq_x) - (data->s_x * data->s_x);
    double res = (long double)a_1 / (long double)a_2;

    return res;
}

double coef_b(data_t *data)
{
    long double a_1 = (data->s_y * data->sq_x) - (data->s_x * data->x_y);
    long double a_2 = (58 * data->sq_x) - (data->s_x * data->s_x);
    double res = (long double)a_1 / (long double)a_2;

    return res;
}

double coef_a2(data_t *data)
{
    long double a_1 = (58 * data->x_y) - (data->s_x * data->s_y);
    long double a_2 = (58 * data->sq_y) - (data->s_y * data->s_y);
    double res = (long double)a_1 / (long double)a_2;

    return res;
}

double coef_b2(data_t *data)
{
    long double a_1 = (data->s_x * data->sq_y) - (data->s_y * data->x_y);
    long double a_2 = (58 * data->sq_y) - (data->s_y * data->s_y);
    double res = (long double)a_1 / (long double)a_2;

    return res;
}

data_t *rms_dev(int ac, char *av[], data_t *value)
{
    int year = 1960;
    long double res1 = 0;
    long double res2 = 0;
    long double yi = 0;
    long double y = 0;
    long double y2 = 0;
    long double ecart_typx = 0;
    long double ecart_typy = 0;
    long double covariance = 0;
    char **map = NULL;
    long double stock = 0;
    long double stock2 = 0;
    char **data = NULL;
    int index = 0;
    int k = 0;

    value->name = malloc(sizeof(char *) * (ac - 1));
    for (k = 1; k < ac; k++) {
	value->name[k - 1] = malloc(sizeof(char) * strlen(av[k]));
    }
    k = 0;
    map = lecture();
    for (int i = 2; i < 60; i++) {
        y = 0;
        for (int j = 1; j < ac; j++) {
            index = recup_arg(map, av[j]);
            index = check_index(index);
            data = spe_str_to_word_array(map[index]);
            value->name[k] = data[0];
            y += atof(data[i]);
            k++;
        }
	yi = y / 1000000;
	y2 = (year - value->b2) / value->a2;
	res1 = ((yi - (value->a1 * year) - value->b1));
	res2 = yi - y2;
        covariance += (year - value->moy_x) * (yi - value->moy_y);
	ecart_typy += (yi - value->moy_y) * (yi - value->moy_y);
	ecart_typx += (year - value->moy_x) * (year - value->moy_x);
        stock += res1 * res1;
	stock2 += res2 * res2;
        year++;
	res1 = 0;
	res2 = 0;
    }
    value->r = covariance / (sqrt(ecart_typx) * sqrt(ecart_typy));
    value->rt_mean = sqrt(stock / 58);
    value->rt_mean2 = sqrt(stock2 / 58);
    return value;
}

data_t *all_data(int ac, char **av, data_t *value)
{
    int i = 0;

    value->a1 = coef_a(value);
    value->b1 = coef_b(value);
    value->a2 = coef_a2(value);
    value->b2 = coef_b2(value);
    value = rms_dev(ac, av, value);
    printf("Country: ");
    for (i = 0; i < ac - 2; i++) {
        printf("%s, ", value->name[i]);
    }
    printf("%s\n", value->name[ac - 2]);
    printf("Fit1\n");
    printf("\tY = %.2Lf X ", value->a1);
    if (value->b1 > 0)
        printf("+ %.2Lf\n", value->b1);
    else
        printf("- %.2Lf\n", (value->b1 * -1));
    printf("\tRoot-mean-square deviation: %.2Lf\n", value->rt_mean);
    printf("\tPopulation in 2050: %.2Lf\n", (value->a1 * 2050 + (value->b1)));
    printf("Fit2\n");
    printf("\tX = %.2Lf Y ", value->a2);
    if (value->b2 > 0)
	printf("+ %.2Lf\n", value->b2);
    else
	printf("- %.2Lf\n", (value->b2 * -1));
    printf("\tRoot-mean-square deviation: %.2Lf\n", value->rt_mean2);
    printf("\tPopulation in 2050: %.2Lf\n", ((2050 - value->b2) / value->a2));
    printf("Correlation: %.4Lf\n", value->r);
}
