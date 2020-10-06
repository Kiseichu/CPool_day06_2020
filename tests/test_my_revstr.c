/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_revstr(char *);

Test(my_revstr, rev_the_str)
{
    char str[6] = "Hello";

    cr_assert_str_eq(my_revstr(strdup(str)), "olleH");
}