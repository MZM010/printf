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
int print_percent();

#endif /* MAIN_H */

