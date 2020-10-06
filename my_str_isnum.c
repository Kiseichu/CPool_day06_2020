/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_str_isnum
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 0;
    while (str[i] != '\0') {
        if (str[i] <= 48 && str[i] >= 57)
            return 0;
        i++;
    }
    return 1;
}