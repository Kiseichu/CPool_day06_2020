/*
** EPITECH PROJECT, 2020
** test_my_revstr
** File description:
** testing my_rev_str
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_revstr(char *str);

Test(my_rev_str, is_it_reversing_correctly)
{
    char *str1 = "Hello";
    char *str2 = my_revstr(strdup(str1));

    cr_assert_str_eq(str2, "olleH");
}
