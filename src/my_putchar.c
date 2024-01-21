/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my_putchar.c
*/

#include <unistd.h>
#include "../include/printers.h"

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
