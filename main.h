#ifndef MAIN_H
#define MAIN_H

/* libs */
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
/* functions */

int _printf(const char *format, ...);
int my_putchar(char c);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_int(int n);
int print_decimal(va_list list);
int handler(const char **format, va_list list);
int print_u(unsigned int n);
int print_unsigned(va_list list);
int print_rev(va_list list);
int print_oct(va_list list);
#endif /* MAIN_H */

