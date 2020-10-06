/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_put_nbr_base
*/

void my_putchar(char c);

static int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return i;
}

int my_putnbr_base(int nbr, char *base)
{
    int base_size = my_strlen(base);

    if (base[0] == '\0')
        return 0;
    if (base_size < 2)
        return 0;
    if (nbr < 0) {
        my_putchar('-');
        nbr = nbr * (-1);
    }
    if (nbr >= base_size)
        my_putnbr_base(nbr / base_size, base);
    my_putchar(base[nbr % base_size]);
    return 0;
}
