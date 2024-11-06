#ifndef FONCTIONS_H
#define FONCTIONS_H

// Function to add two integers
int add(int a, int b);

// Function to subtract two integers
int subtract(int a, int b);

// Function to multiply two integers
int multiply(int a, int b);

// Function to divide two integers
double divide(int a, int b);

// Function to print a string in the middle of a window
void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string);
void quadrillage();
#endif // FONCTIONS_H
