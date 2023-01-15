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


void rotate_ra(node_t **head_a, node_t** head_b, int min_nb)
{
    int cnt = 0;
    node_t* current_a = *head_a;
    while (current_a->data != min_nb) {
        current_a = current_a->next;
        cnt++;
    }
    while (current_a->next != NULL) {
        current_a = current_a->next;
    }
    while (cnt > 0) {
        current_a->next = create_node((*head_a)->data);
        current_a = current_a->next;
        *head_a = (*head_a)->next;
        (*head_a)->previous = NULL;
        my_putstr("ra ");
        cnt --;
    }
}
