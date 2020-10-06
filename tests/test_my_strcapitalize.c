/*
** EPITECH PROJECT, 2020
** test_my_strcapitalize.c
** File description:
** test for strcapitalize possibilities
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, test_a_big_string)
{
    char *str = "MY LiFE Is FUCkIng 974SHIT for-this thing";
    char *answer = my_strcapitalize(strdup(str));

    cr_assert_str_eq(answer, "My Life Is Fucking 974shit For-This Thing");
}
