#ifndef main_h
#define main_h

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
void fill(char ch);
int handle_char(va_list inf);
int handle_string(va_list inf);
int string_null(void);
int handle_percentage(va_list inf);
int number_of_digits(int num);
int handle_integer(va_list inf);
int switch_specifier(char specifier, va_list inf);
int if_specifier(char ch, va_list inf);

#endif
