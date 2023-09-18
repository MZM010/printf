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
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter += handler(&format, list);
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
