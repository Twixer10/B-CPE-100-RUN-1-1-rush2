/*
** EPITECH PROJECT, 2020
** MY STR LEN ALPHA NUM
** File description:
** NO DESCRIPTION FOUND
*/

int my_str_isalphanum(char c);

int my_strlenalphanum(char *str)
{
    int i = 0;
    int count = 0;
    
    while (str[i]) {
        if(my_str_isalphanum(str[i]) == 1)
            count = count + 1;
        i = i + 1;
    }
    return (count);
}
