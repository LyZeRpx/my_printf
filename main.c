/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** main.c
*/

#include "include/printers.h"
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    float f = 1.3569;

    return my_printf("%f", f);
}
