/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_nbr_base.c
*/

#include "printers.h"

int my_put_nbr_base(int nb, int base)
{
    if (nb < 0) {
        nb *= -1;
        if (base != 2) {
            my_putchar('-');
        }
    }
    if (nb != 0) {
        my_put_nbr_base((nb / base), base);
        my_putchar((nb % base) + 48);
    }
    return 0;
}
