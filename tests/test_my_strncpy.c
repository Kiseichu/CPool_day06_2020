/*
** EPITECH PROJECT, 2020
** test
** File description:
** my_strncpy.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <string.h>

char *my_strncpy(char *, char const *n, int);

Test ( my_strncpy , copy_five_characters_in_empty_array )
{
char dest [6] = {0};
my_strncpy ( dest , "HelloWorld", 5) ;
cr_assert_str_eq ( dest , "Hello") ;
}