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
		case '\0':
			break;
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
		case 'u':
			counter += print_unsigned(list);
			break;
		case 'r':
			counter += print_rev(list);
			break;
		case 'o':
			counter += print_oct(list);
			break;
		case 's':
			counter += print_string(list);
			break;
		case 'x':
			counter += print_x(list);
			break;
		case 'X':
			counter += print_X(list);
	}
	return (counter);
}
