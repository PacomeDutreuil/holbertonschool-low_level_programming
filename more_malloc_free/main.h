#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

void free_grid(int **grid, int height);

int **alloc_grid(int width, int height);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);

int *array_range(int min, int max);

void *_calloc(unsigned int nmemb, unsigned int size);
#endif
