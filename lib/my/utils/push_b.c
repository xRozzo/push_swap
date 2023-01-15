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

void push_b(node_t **head_a, node_t **head_b)
{
    node_t *new_node = NULL;
    if (*head_b == NULL) {
        *head_b = create_node((*head_a)->data);
    } else {
        new_node = create_node((*head_a)->data);
        new_node->next = *head_b;
        *head_b = new_node;
    }
    *head_a = (*head_a)->next;
    my_putstr("pb ");
}
