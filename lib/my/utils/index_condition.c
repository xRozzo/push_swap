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

int check_value(node_t* head_a, node_t* head_b)
{
    node_t* current_a = head_a;
    node_t* current_b = head_b;
    head_b = current_a;
    while (head_a->data <= current_a->data && current_a->next != NULL) {
        current_a = current_a->next;
    }
}
