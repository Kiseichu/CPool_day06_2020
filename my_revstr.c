/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_revstr
*/

#include <string.h>
#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

char *my_revstr(char *str)
{
    int i = 0;
    int j = my_strlen(str) - 1;
    char t;

    while (i != j) {
        t = str[i];
        str[i] = str[j];
        str[j] = t;
        i++;
        j--;
    }
    return str;
}
