0x12. C - Singly linked lists

This directory contains code for the Singly linked lists project in C programming language. In this project, we create and manipulate singly linked lists.

Files

Here are the files with a short description of their contents:

0-print_list.c : A function that prints all the elements of a singly linked list.

1-list_len.c : A function that returns the number of elements in a singly linked list.

2-add_node.c : A function that adds a new node at the beginning of a singly linked list.

3-add_node_end.c : A function that adds a new node at the end of a singly linked list.

4-free_list.c : A function that frees a singly linked list.

100-first.c : A function that prints a message before the main function is executed.

101-hello_holberton.asm : A module that prints "Hello, Holberton" on the standard output.

Functions

Here are the functions with a short description of their usage:

print_list : This function is used to print all the elements of a singly linked list.

list_len : This function is used to return the number of elements in a singly linked list.

add_node : This function is used to add a new node at the beginning of a singly linked list.

add_node_end : This function is used to add a new node at the end of a singly linked list.

free_list : This function is used to free the memory occupied by a singly linked list.

Usage

To use any of the functions in this project, follow these steps:

1. Compile all the C files in this directory by running this command:
```
gcc -Wall -Werror -Wextra -pedantic *.c -o <output_file>
```
Replace `<output_file>` with the desired name of the executable file.

2. Include the necessary header file in your C file:
```
#include "lists.h"
```

3. Call the desired function with the appropriate arguments.

Example
```
#include <stdlib.h>
#include "lists.h"

int main(void)
{
    list_t *head = NULL;

    head = add_node(head, "Holberton");
    head = add_node(head, "School");

    print_list(head);

    free_list(head);

    return (0);
}
```

This program will create a singly linked list with two nodes containing the strings "Holberton" and "School", respectively. Then, it will print out the elements of the list using the `print_list` function and finally, it will free the memory occupied by the list using the `free_list` function.

