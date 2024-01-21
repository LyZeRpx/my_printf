/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** main.c
*/

#include "include/printers.h"
#include <stdio.h>

int main(int ac, char **av)
{
    char a = 'D';
    char *str = "ans";
    int i = 3;
    char *str2 = "jours";

    my_printf("%c%s %i %s nous irons au mcdo", a, str, i ,str2);
    return 0;
}
