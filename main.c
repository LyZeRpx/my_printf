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
    // char *str = "Hello";
    // char W = 'W';
    // char *str2 = "orld";
    //return printf("%s %c%s\n", str, W, str2);
    //return my_printf("%s %c%s\n", str, W, str2);
    for (int i = -100; i < 101; i++) {
        usleep(20000);
        my_printf("%d \n", i);
    }
    //int i = 123456789;

    return 0;
}
