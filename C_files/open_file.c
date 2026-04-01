/*
** EPITECH PROJECT, 2024
** open_file
** File description:
** open_file
*/

#include "../include/my.h"
char **lecture(void)
{
    struct stat d;
    char *str;
    char **data;
    char const *filepath = "./105demography_data.csv";
    int fd = open(filepath, O_RDONLY);

    if (fd == -1 || stat(filepath, &d) == -1)
        exit(84);
    str = malloc(sizeof(char) * (d.st_size + 1));
    read(fd, str, d.st_size);
    str[d.st_size] = '\0';
    data = my_str_to_word_array(str);
    close(fd);
    return data;
}
