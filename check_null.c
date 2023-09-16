#include "main.h"
/*
 * check_null - check if there's no thing
 * @char_p: len of char
 * @format: just format
 */

int check_null(int char_p, format)
{
	write(1, format, 1);
	char_p++;
	return (char_p);
}
