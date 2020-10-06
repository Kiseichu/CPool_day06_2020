/*
** EPITECH PROJECT, 2020
** test is printable
** File description:
** Test if my string is printable
*/

#include <criterion/criterion.h>

int my_str_isprintable(char const *str);

Test(is_printable, test_if_the_string_returns_printable)
{
    cr_assert_eq(my_str_isprintable("lol xptdr jpp mec"), 1);
}
