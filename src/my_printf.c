/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../include/printers.h"
#include "../include/flagshandling.h"

int my_printf(char const *format, ...)
{
    va_list arg;

    va_start(arg, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else {
            check_flag(arg, format[i + 1]);
            i++;
        }
    }
    va_end(arg);
    return 0;
}
