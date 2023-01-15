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


int operation(int cnt, bool last)
{
    if (cnt == 0)
        last = true;
    if (last == true)
        my_putstr("pa\n");
    else
        my_putstr("pa ");
    cnt--;
    return (cnt);
}

void push_a(node_t **head_a, node_t **head_b)
{
    int cnt = 0;
    static bool last = false;
    node_t *current_b = *head_b;
    node_t *current_a = NULL;
    (*head_a != NULL) ? (current_a = *head_a) : (cnt++, cnt--);
    while (current_b->next != NULL) {
        current_b = current_b->next;
        cnt ++;
    }
    while (cnt >= 0 ) {
        if (*head_a == NULL) {
            *head_a = create_node((*head_b)->data);
        } else {
            node_t *new_node = create_node((*head_b)->data);
            new_node->next = *head_a;
            *head_a = new_node;
        }
        *head_b = (*head_b)->next;
        cnt = operation(cnt, last);
    }
}
