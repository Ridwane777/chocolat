/*
** EPITECH PROJECT, 2024
** str_to_word_array
** File description:
** one word in one array
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/my.h"
int analyse_str(char c)
{
    if (c > 64 && c < 91 || c > 96 && c < 123 || c > 47 && c < 58 || c == '.') {
    return 1;
    } else if (c == '"' || c == '\n') {
    return 0;
    }
    return 1;
}

int count_words(char const *str)
{
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
    if (analyse_str(str[i]) == 1 && analyse_str(str[i + 1]) == 0)
    num++;
    }
    return num;
}

char **my_str_to_word_array(char const *str)
{
    int len = 0;
    int j = 0;
    int nbr = count_words(str);
    char **src = (char **)malloc((nbr + 1) * sizeof(char *));

    for (int i = 0; i < strlen(str); i++) {
	if (analyse_str(str[i]))
	    len++;
	if (analyse_str(str[i]) && analyse_str(str[i + 1]) == 0) {
	    src[j] = (char *)malloc((len + 1) * sizeof(char));
	    my_strncpy(src[j], &str[i - len + 1], len);
	    src[j][len] = '\0';
	    len = 0;
	    j++;
	}
    }
    src[j] = NULL;
    return src;
}
