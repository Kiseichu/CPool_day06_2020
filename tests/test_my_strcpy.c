/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** test_my_strcpy
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

char *my_strcpy(char *, char const *);

Test(my_strcpy, test_strcpy)
{
    char *dest = malloc(sizeof(char) * (5 + 1));

    my_strcpy(dest, "hello");
    cr_assert_str_eq(dest, "hello");
}