/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays an int on the screen
*/

#include <stdio.h>
#include "../include/printers.h"

int my_put_nbr(int nb)
{
    int div = 1;
    int stock = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    while (nb > div) {
        div = div * 10;
    }
    div = div / 10;
    while (nb > 9) {
        stock = nb;
        nb = nb / div;
        my_putchar(nb + 48);
        nb = stock - nb * div;
        div = div / 10;
    }
    my_putchar(nb + 48);
    return 0;
}
