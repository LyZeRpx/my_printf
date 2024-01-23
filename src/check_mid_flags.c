/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** check_mid_flags.c
*/

#include <stdarg.h>
#include "../include/printers.h"
#include "../include/flagshandling.h"

int check_mid_flags(va_list arg, char mid_flag)
{
    switch (mid_flag) {
    case 'o':
        my_put_nbr_base(va_arg(arg, int), 8);
        break;
    case 'x':
        my_put_nbr_base(va_arg(arg, int), 16);
        break;
    case 'X' :
        my_put_nbr_base(va_arg(arg, int), 16);
        break;
    case '%':
        my_putchar('%');
        break;
        default:
        check_hard_flags(arg, mid_flag);
    }
    return 0;
}
