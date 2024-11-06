#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ncurses.h>

void quadrillage(){
    int i;
    for(i=0; i<LINES; i++){
        mvaddch(i, COLS/2, '|');
    }
    for(i=0; i<COLS; i++){
        mvaddch(LINES/2, i, '-');
    }
}