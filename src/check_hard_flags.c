/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** check_hard_flags.c
*/

#include <stdarg.h>
#include "../include/printers.h"
#include "../include/flagshandling.h"

int check_hard_flags(va_list arg, char hard_flag)
{
    switch (hard_flag) {
    case 'f':
        my_putfloat(va_arg(arg, double));
        break;
    default:
        return 84;
        break;
    }
    return 0;
}
