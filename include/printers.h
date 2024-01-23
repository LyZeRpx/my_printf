/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** printers.h
*/

#ifndef PRINTERS_H
    #define PRINTERS_H

int my_printf(char const *format, ...);
int my_put_nbr(int nb);
int my_put_nbr_base(int nb, int base);
int my_putstr(char const *str);
int my_putchar(char c);
int my_putfloat(float decimal);

#endif /* PRINTERS_H */
