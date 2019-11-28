#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

/* FUNCTIONS PROTOTYPES*/
void end_of_file(char *buffer);
char **executer(char **array);
void free_grid(char **string);
void free_all(char **ptr);
void null_array(char **buffer);
void get_out(char **array);
char *read_line();
unsigned int _strlen(char *str);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char **strtoken(char *string);

#endif
