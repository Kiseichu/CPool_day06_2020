/*
** EPITECH PROJECT, 2020
** B-CPE-100-RUN-1-1-cpoolday06-khadafi.hadjee-issouf
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
