#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
void fill(char ch);
int handle_char(char ch);
int handle_string(char *str);
void string_null(void);
int handle_percentage(void);
int number_of_digits(int num);
int handle_integer(va_list inf);
int switch_specifier(char specifier, va_list inf);
int if_specifier(char ch, va_list inf);
int handle_binary(va_list inf);
int handle_newline(void);

#endif
