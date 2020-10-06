/*
** EPITECH PROJECT, 2020
** test_my_revstr
** File description:
** testing my_strstr
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, is_it_the_same_as_strstr)
{
    char *str1 = "Hello je suis trop beau";
    char *answer_mine1 = my_strstr(str1, "je");
    char *answer_strstr1 = strstr(str1, "je");

    cr_assert_str_eq(answer_mine1, answer_strstr1);
}

Test(my_strstr2, if_it_does_not_find_anything)
{
    char *str2 = "Bonjour wow";
    char *answer_mine2 = my_strstr(str2, "lihafhje");
    char *answer_strstr2 = strstr(str2, "lihafhje");

    cr_assert_eq(answer_mine2, answer_strstr2);
}

Test(my_strstr3, if_the_second_string_is_empty)
{
    char *str3 = "Bonjour wow";
    char *answer_mine3 = my_strstr(str3, "");
    char *answer_strstr3 = strstr(str3, "");

    cr_assert_eq(answer_mine3, answer_strstr3);
}

Test(my_strstr4, if_the_first_string_is_empty)
{
    char *str4 = "";
    char *answer_mine4 = my_strstr(str4, "lol");
    char *answer_strstr4 = strstr(str4, "lol");

    cr_assert_eq(answer_mine4, answer_strstr4);
}
