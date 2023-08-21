# 0x18-dynamic_libraries

This repository contains the tasks for `0x18-dynamic_libraries`: a Holberton School project about dynamic libraries in C programming.

## Learning Objectives

In this project, I learned about:

- What is a dynamic library, how does it work, how to create one, and how to use it.
- What is the environment variable `$LD_LIBRARY_PATH` and how to use it.
- What are the differences between static and shared libraries.
- Basic usage of `nm`, `ldd`, and `ldconfig` command.

## Tasks

This project contains the following tasks:

### libholberton.so, holberton.h

Create the dynamic library `libholberton.so` containing all the functions listed below:

```c
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```

### 1-create_dynamic_lib.sh

Create a script that creates a dynamic library `liball.so` from all the `.c` files that are in the current directory.

## Credits

These tasks were completed as part of the curriculum for the Holberton School Full Stack Software Engineering Program.

## License

This repository contains work by Holberton School, which is licensed under a Creative Commons Attribution-NonCommercial-NoDerivs 3.0 Unported License. It does not contain any additional licenses.
