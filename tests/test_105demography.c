#include <criterion/criterion.h>
#include "../include/my.h"
#include <criterion/redirect.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_strlen, string_lenght, .init = redirect_all_std)
{
    int a = my_strlen("Best");
    cr_assert_eq(a, 4);
}

Test(my_strncpy, copy_n_character, .init = redirect_all_std)
{
    char s1[7];
    char s2[12] = "EpitechBenin";
    char s3[5];
    char s4[7] = "Cotonou";
    cr_assert_neq(my_strncpy(s1, s2, 4), "hjgkhljk");
    cr_assert_neq(my_strncpy(s3, s4, 5), "kulihj");
}

Test(is_alpha, checker_alpha, .init = redirect_all_std)
{
    int a = is_alpha("ASDFGH");
    int b = is_alpha("1254");

    cr_assert_eq(a, 1);
    cr_assert_eq(b, -1);
}


Test(check, checker_al, .init = redirect_all_std)
{
    int a = check("ASDFGH", "frhekhfruefhkr");

    cr_assert_neq(a, 1);
}

Test(count_words, count, .init = redirect_all_std)
{
    int a = count_words("Hey\nthere");

    cr_assert_neq(a, 2);
}

Test(analyse_str, ckeck_str_validity, .init = redirect_all_std)
{
    int a = analyse_str('C');
    int b = analyse_str('\n');

    cr_assert_eq(a, 1);
    cr_assert_eq(b, 0);
}

Test(count_words2, count, .init = redirect_all_std)
{
    int a = count_words2("Hey\nthere");

    cr_assert_neq(a, 2);
}

Test(analyse_str2, ckeck_str_validity, .init = redirect_all_std)
{
    int a = analyse_str2('C');
    int b = analyse_str2(';');

    cr_assert_eq(a, 1);
    cr_assert_eq(b, 0);
}

Test(usage, infos, .init = redirect_all_std)
{
    int a = usage();
    cr_assert_neq(a, 0);
}
