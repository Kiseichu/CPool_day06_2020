/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_str_isprintable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 0;
    while (str[i] != '\0') {
        if (str[i] >= 0 && str[i] <= 32 || str[i] == 127)
            return 0;
        i++;
    }
    return 1;
}