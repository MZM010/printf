#include "main.h"

/**
 * print_string - print the string
 *
 * @list: list
 * @char_p: the normal value
 * Return: return the value of char_p
 *
 */
int print_string(va_list list, int char_p)
{
	const char *str = va_arg(list, char*);

	while (*str)
	{
		write(1, &str, 1);
		str++;
		char_p++;
	}
	return (char_p);
}
