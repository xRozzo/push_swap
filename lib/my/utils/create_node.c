/*
** EPITECH PROJECT, 2022
** is_float
** File description:
** handle the precision
*/

#include "../src/struct.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

node_t* create_node(int data)
{
    node_t* new_node = (node_t*)malloc(sizeof (node_t));
    new_node->data = data;
    new_node->next = NULL;
    new_node->previous = NULL;
    return new_node;
}
