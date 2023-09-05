#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void print_int_array(int *a, int size);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

#endif
