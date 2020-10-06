/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** test my str_is_lower
*/

#include <string.h>
#include <criterion/criterion.h>

int my_str_islower(char const *str);

Test(my_str_islower, test_my_str_islower)
{
    cr_assert_eq(my_str_islower("lolmdr"), 1);
}
