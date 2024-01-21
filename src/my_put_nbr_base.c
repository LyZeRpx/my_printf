/*
** EPITECH PROJECT, 2023
** PUTNVR
** File description:
** NBR
*/

#include <stdio.h>
#include "../include/printers.h"

int my_putnbr_base(int nb, int base)
{
    int div = 1;
    int stock = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (nb > div) {
        div = div * base;
    }
    div = div / base;
    while (nb > base - 1) {
        stock = nb;
        nb = nb / div;
        my_putchar(nb + 48);
        nb = stock - nb * div;
        div = div / base;
    }
    my_putchar(nb + 48);
    return 0;
}