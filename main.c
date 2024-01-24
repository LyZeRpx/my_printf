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
    int i = 2468;

    return my_printf("%d in binary is %b", i, i);
}
