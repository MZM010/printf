#include "main.h"

/**
 * print_char - print the char
 *
 * @list: list of argument
 *
 * @char_p: normal value
 *
 * Return: teh value of the normal value
 */
int print_char(va_list list, int char_p)
{
	int c;

	c = va_arg(list, int);
	write(1, &c, 1);
	char_p++;
	return (char_p);
}
