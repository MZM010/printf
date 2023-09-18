#include "main.h"
/**
 * _printf - Custom the printf function.
 *
 * @format: The format string
 * @...: Optional arguments
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int counter = 0;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
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
				default:
					break;
			}
		}
		else
		{
			my_putchar(*format);
			counter++;
		}
		format++;
	}
	va_end(list);
	return (counter);
}
