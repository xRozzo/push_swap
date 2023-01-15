/*
** EPITECH PROJECT, 2022
** is_float
** File description:
** handle the precision
*/

#include "../src/struct.h"
#include <stddef.h>
#include <stdio.h>
#include "my.h"


int *return_numbers(int argc, char **argv)
{
    int* numbers = NULL;
    int nb = 0;
    int n = 0;
    int i = 1;
    int z = 0;
    while (argv[i]){
        n++;
        i++;
    }
    numbers = malloc(sizeof(int) * (n + 1));
    i = 1;
    nb = n;
    while (n > 0) {
        numbers[z] = get_nb(argv[i]);
        i ++;
        z ++;
        n--;
    }
    return (numbers);
}

int return_n(int argc, char **argv)
{
    int nb = 0;
    int n = 0;
    int i = 1;
    int z = 0;
    while (argv[i]){
        n++;
        i++;
    }
    return (n);
}
