/*
** EPITECH PROJECT, 2022
** Abricot-Tests
** File description:
** test
*/

#ifndef TEST_H_
    #define TEST_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

//Structures double circular linked list
typedef struct list {
    int data;
    struct list *next;
    struct list *prev;
} list_t;

#endif /* !TEST_H_ */
