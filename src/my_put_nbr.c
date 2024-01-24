/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_put_nbr.c
*/

#include "printers.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        nb *= -1;
        my_putchar('-');
    }
    if (nb != 0) {
        my_put_nbr(nb / 10);
        my_putchar((nb % 10) + 48);
    }
    return 0;
}
