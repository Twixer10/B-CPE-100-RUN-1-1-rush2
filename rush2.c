/*
** EPITECH PROJECT, 2020
** Rush 2
** File description:
** NO DESCRIPTION FOUND
*/

#include "./include/my.h"
#include <unistd.h>

void get_frequency(int strlen, int count)
{
    int i = ((count * 10000) / strlen);
    int nbr = i / 100;
    int flt = i % 100;
    my_putstr(" (");
    my_put_nbr(nbr);
    my_putchar('.');
    if (flt == 0)
        my_put_nbr(flt);
    my_put_nbr(flt);
    my_putstr("%)");
}

int count_letter(char *string, char s)
{
    int i = 0;
    char *str = my_strlowcase(string);
    char search = my_charlowcase(s);
    int count = 0;
    
    while (str[i])
    {
        if(str[i] == search) {
            count = count + 1;
        }
        i = i + 1;
    }
    my_putchar(s);
    my_putchar(':');
    my_put_nbr(count);
    get_frequency(my_strlenalphanum(str), count);
    my_putchar('\n');
    return (0);
}

void search(int argc, char **argv)
{
	argc = argc + 1;
    int i = 2;
    while (argv[i] && argv[i][0]) {
        count_letter(argv[1], argv[i][0]);
        i = i + 1;
    }
}


int main(int argc, char **argv)
{
	if (argc <= 2) {
		write(2, "Invalide params", 16);
		return (0);
	}
    search(argc, argv);
    return (0);
}
