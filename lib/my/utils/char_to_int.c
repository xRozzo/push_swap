/*
** EPITECH PROJECT, 2022
** is_float
** File description:
** handle the precision
*/

#include <stdarg.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include "my.h"
#include <stdio.h>

int get_nb(char *format)
{
    int nb = 0;
    int i = 0;
    int is_negative = 0;
    if (format[i] == '-') {
        is_negative = 1;
        i++;
    }
    nb = format[i] - '0';
    while (is_num(format[i + 1])) {
        nb = (nb * 10);
        nb += format[i + 1] - '0';
        i++;
    }
    if (is_negative) {
        nb *= -1;
    }
    return (nb);
}
