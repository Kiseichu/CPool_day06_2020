/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** test my str_is_lower
*/

#include <string.h>
#include <criterion/criterion.h>

int my_str_isnum(char const *str);

Test(my_str_isnum, test_my_str_isnum)
{
    cr_assert_eq(my_str_isnum("lolmdr"), 1);
}
