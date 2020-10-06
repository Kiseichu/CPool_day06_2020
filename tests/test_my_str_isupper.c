#include <unistd.h>

/*
** EPITECH PROJECT, 2020
** test is printable
** File description:
** Test if my string is printable
*/

#include <criterion/criterion.h>

int my_str_isupper(char const *str);

Test(is_printable, test_if_the_string_returns_upper)
{
    cr_assert_eq(my_str_isupper("lol xptdr jpp mec"), 0);
}
