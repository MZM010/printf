#include "main.h"
/*
 * check_null - check the value
 *
 * @char_p: len of char
 * @format: just format
 */

int check_null(int char_p, const char *format)
{
	write(1, format, 1);
	char_p++;
	return (char_p);
}
