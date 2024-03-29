/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_printf.c
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/printers.h"
#include "../include/flagshandling.h"

int my_printf(char const *format, ...)
{
    va_list arg;
    int i = 0;
    int count = 0;

    va_start(arg, format);
    for (; format[i] != '\0'; i++) {
        if (format[i] != '%') {
            my_putchar(format[i]);
        } else {
            count += check_flag(arg, format[i + 1], &i);
            i++;
        }
    }
    va_end(arg);
    return i + count;
}
