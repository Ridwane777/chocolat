/*
** EPITECH PROJECT, 2025
** the unit tests
** File description:
** test_function.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

Test(print_zero, print_character_zero)
{
    cr_assert_str_eq(*print_zero(NULL), " 000 ");
}

Test(print_zero, print_character_zero1)
{
    cr_assert_str_eq(*print_zero("a"), " aaa ");
}

Test(print_one, print_character_one)
{
    cr_assert_str_eq(*print_one(NULL), " 000 ");
}

Test(print_two, print_character_two)
{
    cr_assert_str_eq(*print_two(NULL), " 000 ");
}

Test(print_tree, print_character_tree)
{
    cr_assert_str_eq(*print_tree(NULL), "0000 ");
}
    
