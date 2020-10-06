/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** test my strncmp
*/

#include <string.h>
#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, test_my_strcmp_with_the_real_function)
{
    char *str = "Hellijfealfa";
    char *str2 = "Hellinejnfjakf";

    cr_assert_eq(my_strcmp(str, str2), strcmp(str, str2));
}

Test(my_strcmp, if_my_strcmp_with_empty_s2)
{
    char *str = "Hello";
    char *str2 = "";

    cr_assert_eq(my_strcmp(str, str2), strcmp(str, str2));
}

Test(my_strcmp, if_my_strcmp_with_empty_s1)
{
    char *str = "";
    char *str2 = "Hello";

    cr_assert_eq(my_strcmp(str, str2), strcmp(str, str2));
}

Test(my_strcmp, if_my_strcmp_with_2chars)
{
    char *str = "JohnDoe";
    char *str2 = "Doe";

    cr_assert_eq(my_strcmp(str, str2), strcmp(str, str2));
}
