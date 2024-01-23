/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** check_flag.c
*/

#include <stdarg.h>
#include "../include/printers.h"
#include "../include/flagshandling.h"

int check_flag(va_list arg, char flag, int *count)
{
    switch (flag) {
    case 'd':
        *count += my_put_nbr(va_arg(arg, int));
        break;
    case 'i':
        *count += my_put_nbr(va_arg(arg, int));
        break;
    case 'c':
        *count += my_putchar(va_arg(arg, int));
        break;
    case 's':
        *count += my_putstr(va_arg(arg, char *));
        break;
    default:
        check_mid_flags(arg, flag);
        break;
    }
    return *count;
}
