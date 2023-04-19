#ifndef FUNCTION_POINTERS.H
#define FUNCTION_POINTERS.H


void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int _putchar(char *);

#endif

