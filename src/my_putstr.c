/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_putstr.c
*/

#include "../include/printers.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
