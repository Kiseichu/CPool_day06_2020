/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** test my my_str_isalpha
*/

#include <string.h>
#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(test_my_str_isalpha, test_my_str_isalpha)
{
    cr_assert_eq(my_str_isalpha("Lol_mdr"), 0);
}
