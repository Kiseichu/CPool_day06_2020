/*
** EPITECH PROJECT, 2020
** test_my_revstr
** File description:
** testing my_rev_str
*/

#include <criterion/criterion.h>
#include <string.h>

char *my_strupcase(char *str);

Test(my_strupcase, is_it_all_upcase)
{
    char *str1 = "HeLlo lOl 9sept4 jpP";
    char *str2 = my_strupcase(strdup(str1));

    cr_assert_str_eq(str2, "HELLO LOL 9SEPT4 JPP");
}
