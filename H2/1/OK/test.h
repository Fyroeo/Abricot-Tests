/*
** EPITECH PROJECT, 2021
** B-CPE-110-LYN-1-1-pushswap-thomas.mazaud
** File description:
** pushswap
*/

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>

    //Structures double circular linked list
    typedef struct list {
        int data;
        struct list *next;
        struct list *prev;
    } list_t;
