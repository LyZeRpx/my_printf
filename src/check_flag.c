/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** check_flag.c
*/

#include <stdarg.h>
#include "../include/printers.h"
#include <stdlib.h>

int check_flag(va_list arg, char flag)
{
    switch (flag) {
    case 'd':
        my_put_nbr(va_arg(arg, int));
        break;
    case 'i':
        my_put_nbr(va_arg(arg, int));
        break;
    case 'c':
        my_putchar(va_arg(arg, char));
        break;
    case 's':
        my_putstr(va_arg(arg, char *));
    default:
        break;
    }

    return 0;
}
