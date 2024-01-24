/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_putfloat.c
*/

#include "../include/printers.h"

int my_putfloat(float decimal)
{
    int intpart = 0;
    int i = 5;

    if (decimal < 0) {
        decimal *= -1;
        my_putchar('-');
    }
    while (i + 1 != 0) {
        intpart = decimal;
        decimal -= ((float) intpart);
        my_putchar(intpart + 48);
        decimal *= 10;
        i--;
    }
    return 0;
}
