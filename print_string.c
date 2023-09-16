#include "main.h"

/**
 * print_string - print the string
 * @len: length
 * @list: list
 * @char_p: the normal value
 * Return: return the value of char_p
 *
 */
int print_string(int len, va_list list, int char_p)
{
	char *str = va_arg(list, char*);

	while (str[len] != '\0')
		len++;
	write(1, str, len);
	char_p += len;
	return (char_p);
}
