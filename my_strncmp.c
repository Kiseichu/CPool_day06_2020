/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int nb)
{
    int index = 0;

    while (index < nb && s1[index] != '\0' && s2[index] != '\0') {
        if (s1[index] > s2[index])
            return 1;
        else if (s1[index] < s2[index])
            return -1;
    }
    return 0;
}