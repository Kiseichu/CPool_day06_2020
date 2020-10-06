/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_strcapitalize.c
*/

char *my_strcapitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        (str[i] >= 'A' && str[i] <= 'Z') ? str[i] = str[i] + 32 : 0;
        i++;
    }
    i = 1;
    (str[0] >= 'a' && str[0] <= 'z') ? str[0] = str[0] - 32 : 0;
    while (str[i] != '\0') {
        if (str[i - 1] <= 47 && str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        i++;
    }
    return str;
}