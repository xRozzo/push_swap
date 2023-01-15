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

void rotate_b(node_t* head_a, node_t* head_b)
{

    if (head_b == NULL) return;

    node_t* current_b = head_b;
    while (current_b->data != 0) {
        current_b = current_b->next;
    }
    current_b->next = create_node(head_b->data);
    head_b = head_b->next;

}

void find_lower(node_t **head_a, node_t **head_b)
{
    node_t* current_a = *head_a;
    node_t* current_b = *head_b;
    node_t* lower_nb = NULL;
    int min_nb = current_a->data;

    while (current_a->next != NULL) {
        current_a = current_a->next;
        if (current_a->data < min_nb)
            min_nb = current_a->data;
    }
    rotate_ra(head_a, head_b, min_nb);
}

node_t* init_list(int *numbers, int n)
{
    int i = 1;
    if (n == 0)
        return NULL;
    node_t* head_a = create_node(numbers[0]);
    node_t* current_a = head_a;
    while (i < n) {
        node_t* new_node = create_node(numbers[i]);
        current_a->next = new_node;
        current_a = new_node;
        i++;
    }
    current_a->next = NULL;
    return head_a;
}

node_t* init_empty_list(int *numbers, int n)
{
    node_t* head_b = NULL;
    return head_b;
}

void create_list(int argc, char **argv)
{
    int cnt = 0;
    int nb_found = 0;
    int* numbers = return_numbers(argc, argv);
    int n = return_n(argc, argv);
    node_t* head_a = init_list(numbers, n);
    node_t* head_b = init_empty_list(numbers, n);
    struct Heads *heads = NULL;

    while (head_a != NULL) {
        find_lower(&head_a, &head_b);
        push_b(&head_a, &head_b);
    }
    push_a(&head_a, &head_b);
    while (head_a->next != NULL) {
        head_a = head_a->next;
    }
}
