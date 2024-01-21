/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** check_flag.c
*/

#include <stdarg.h>
#include "../include/printers.h"

int check_flag(char flag, void *data)
{
    switch (flag) {
    case 'd':
        my_put_nbr((*(int *) data));
        break;
    case 'i':
        my_put_nbr((*(int *) data));
        break;
    case 'c':
        my_putchar((*(char *) data));
        break;
    case 's':
        my_putstr((*(char **) data));
    default:
        break;
    }
    return 0;
}
