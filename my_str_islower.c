/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            return 0;
        i++;
    }
    return 1;
}