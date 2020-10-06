/*
** EPITECH PROJECT, 2020
** Day06
** File description:
** my_strcmp.c
*/

static int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}

int my_strcmp(char const *s1, char const *s2)
{
    int i = my_strlen(s1) - 1;
    int j = my_strlen(s2) - 1;
    int khad = 0;
    int ludo = 0;

    while (khad <= i && khad <= j) {
        if (s1[i] > s2[i] || s1[khad] != s2[khad])
            return 1;
        else if (s1[i] < s2[i] || s2[ludo] != s1[ludo])
            return -1;
        khad++;
        ludo++;
    }
    return 0;
}
