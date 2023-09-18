#include "main.h"

/**
 * handler - handle the format
 * @format: format
 * @list: the list of argument
 * Return: return the counter
 */



int handler(const char **format, va_list list)
{
	int counter = 0;

	switch (**format)
	{
		case 'd':
		case 'i':
			counter += print_decimal(list);
			break;
		case '%':
			counter += print_percent(list);
			break;
		case 'c':
			counter += print_char(list);
			break;
		case 's':
			counter += print_string(list);
			break;
	}
	return (counter);
}
