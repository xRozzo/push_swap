/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** Contains the prototypes of all the functions in libmy.a
*/


#ifndef NODE_H_
    #define NODE_H_

    typedef struct Node_s{
        int data;
        struct Node_s *next;
        struct Node_s *previous;
    }node_t;

    struct Heads {
        struct Node_s *head_a;
        struct Node_s *head_b;
    };

#endif
