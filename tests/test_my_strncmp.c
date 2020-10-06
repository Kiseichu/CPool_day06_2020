/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** test my strncmp
*/

#include <string.h>
#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, test_my_strncmp_with_the_real_function)
{
    char *str = "Hellijfealfa";
    char *str2 = "Hellinejnfjakf";

    cr_assert_eq(my_strncmp(str, str2, 5), strncmp(str, str2, 5));
}

Test(my_strncmp, if_my_strncmp_with_empty_s2)
{
    char *str = "Hello";
    char *str2 = "";

    cr_assert_eq(my_strncmp(str, str2, 3), strncmp(str, str2, 3));
}

Test(my_strncmp, if_my_strncmp_with_empty_s1)
{
    char *str = "";
    char *str2 = "Hello";

    cr_assert_eq(my_strncmp(str, str2, 4), strncmp(str, str2, 4));
}

Test(my_strncmp, if_my_strncmp_with_2chars)
{
    char *str = "JohnDoe";
    char *str2 = "Doe";

    cr_assert_eq(my_strncmp(str, str2, 4), strncmp(str, str2, 4));
}

Test(my_strncmp, if_my_strncmp_has_the_same)
{
    char *str = "JohnDoe";
    char *str2 = "JohnDoe";

    cr_assert_eq(my_strncmp(str, str2, 4), strncmp(str, str2, 4));
}
