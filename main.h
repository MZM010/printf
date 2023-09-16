#ifndef MAIN_H
#define MAIN_H

/* libs */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
/* functions */

int _printf(const char *format, ...);
int print_string(int len, va_list list, int char_p);
int check_null(int char_p);
int print_char(va_list list, int char_p);


#endif /* MAIN_H */

