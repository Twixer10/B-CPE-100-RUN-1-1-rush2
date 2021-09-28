/*
** EPITECH PROJECT, 2020
** MY STR LOW CASE
** File description:
** NO DESCRIPTION
*/

char *my_strlowcase(char *str)
{
    int i = 0;
    
    while (str[i]) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i = i + 1;
    }
    return (str);
}
