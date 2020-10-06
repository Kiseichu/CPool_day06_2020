/*
** EPITECH PROJECT, 2020
** ls
** File description:
** l
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strlowercase(char *);

Test(my_strlowercase, test_lower)
{
    cr_assert_str_eq(my_strlowercase(strdup("Hello")), "hello");
}
