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
    int count = 0;
    int div = 1;
    int i = 0;

    for (; div < nb; div *= 10) {
        i++;
    }
    nb = special_cases(nb, &count);
    for (; i != 0; i--) {
        if ((nb < 9)) {
            my_putchar(nb + 48);
            count ++;
            return count;
        } else {
            my_putchar(((nb % (div)) / (div / 10)) + 48);
            div /= 10;
        }
    }
    return count;
}

int special_cases(int nb, int *count)
{
    int mul = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb == 0) {
        my_putchar('0');
    }
    while (nb == mul) {
        my_putchar('1');
        mul *= 10;
    }
    return nb;
}
