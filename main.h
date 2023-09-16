#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

int _printf(const char *format, ...);
int print_string(int len, va_list list, int char_p);
int check_null(int char_p, format);
int print_char(va_list list, int char_p);



#endif /* MAIN_H */
