/*
** EPITECH PROJECT, 2022
** struct
** File description:
** tetris
*/

#ifndef STRUCT_H
    #define STRUCT_H
    #include <ncurses.h>

typedef struct {
    char *name;
    int len;
    int hei;
    int color;
    char **form;
    int status;
    int check;
    int i;
    int j;
} shape_t;

typedef struct {
    int highscore;
    int level;
    int score;
    int next;
    char **board;
    int shp_len;
    int x;
    int y;
} data_t;

typedef struct {
    WINDOW *hold;
    WINDOW *next;
    WINDOW *board;
    WINDOW *level;
    WINDOW *score;
} pannel_t;

#endif
