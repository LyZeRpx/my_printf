/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** sys.h
*/

#ifndef BACKEND_H
    #define BACKEND_H

int check_flag(va_list arg, char flag, int *count);
int check_mid_flags(va_list arg, char mid_flag);
int check_hard_flags(va_list arg, char hard_flag);

#endif /* BACCKEND_H */
