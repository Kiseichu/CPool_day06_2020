/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** test_my_strcmp
*/

#include <criterion/criterion.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int my_strcmp(char const *, char const *);

Test(my_strcmp, test_00)
{
    cr_expect_eq(my_strcmp("abcd", "bacd"), -1);
}

Test(my_strcmp, test_01)
{
    cr_expect_eq(my_strcmp("Hello World\t\n", "Hello World\t\n"), 0);
}

Test(my_strcmp, test_02)
{
    cr_expect_eq(my_strcmp("    ", "     "), 0);
}

Test(my_strcmp, test_03)
{
    cr_expect_eq(my_strcmp("bacd", "abcd"), 1);
}

Test(my_strcmp, test_04)
{
    cr_expect_eq(my_strcmp("djizad123", "djizad123"), 0);
}