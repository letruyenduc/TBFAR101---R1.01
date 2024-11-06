#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "fonctions.h"
#include "fonctions.c"

int main(int argc, char const *argv[])
{
    initscr();            // Start curses mode
    refresh();            // Print it on to the real screen
    getch();              // Wait for user input
    quadrillage();
    endwin();             // End curses mode

    return 0;
}