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
    char *str = "Bonjour";
    int i = 21;

    my_printf("%s,\nnous sommes le %d\n", str, i);
    return 0;
}
