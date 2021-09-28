/*
** EPITECH PROJECT, 2020
** MY CHAR LOW CASE
** File description:
** NO DESCRIPTION
*/

char my_charlowcase(char str)
{
    if (str >= 65 && str <= 90)
        return (str + 32);
    else
        return (str); 
}
