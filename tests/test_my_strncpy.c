/*
** EPITECH PROJECT, 2020
** test my_strncpy
** File description:
** Learning criterion and unit test
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, is_my_empty_string_now_equal_to_hello)
{
    char dest[6] = {0};
    char dest2[6] = {0};

    my_strncpy(dest, "HelloWorld", 5);
    strncpy(dest2, "HelloWorld", 5);
    cr_assert_str_eq(dest, dest2);
}
