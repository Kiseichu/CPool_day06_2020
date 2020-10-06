/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_strstr
*/

#include <unistd.h>
#include <string.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    if (str[0] == '\0')
        return NULL;
    while (to_find[i] != '\0') {
        if (to_find[i] != str[i])
            return (my_strstr(str + 1, to_find));
        i++;
    }
    return str;
}