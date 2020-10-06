/*
** EPITECH PROJECT, 2020
** my_getnbr_base_tests
** File description:
** Test my get nbr base
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>

int my_putnbr_base(int nb, char const *base);

Test(put_nbr_baseA, test_my_getnbr, .init = cr_redirect_stdout)
{
    char *hexa = "0123456789abcdef";
    int nb = 10;
    my_putnbr_base(nb, hexa);
    cr_assert_stdout_eq_str("a");
}

Test(put_nbr_base_empty, test_my_getnbr_with_empty, .init = cr_redirect_stdout)
{
    char *hexa = "";
    int nb = 675;

    my_putnbr_base(nb, hexa);
    cr_assert_stdout_eq_str('\0');
}

Test(put_nbr_basedec, test_my_getnbr_with_decimals, .init = cr_redirect_stdout)
{
    char *hexa = "0123456789abcdef";
    int nb = 675;

    my_putnbr_base(nb, hexa);
    cr_assert_stdout_eq_str("2a3");
}
