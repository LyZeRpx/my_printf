/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include "../include/printers.h"
#include "../include/backend.h"

int my_printf(char const *format, ...)
{
    va_list arg;

    va_start(arg, format);
    for (int i = 0; format[i] != '\0'; i++) {
        my_putchar(format[i]);
        if (format[i] == '%') {
            check_flag(format[i + 1], va_arg(arg, void *));
        }
    }
    va_end(arg);
    return 0;
}