#include "main.h"
/**
 * _printf - prints like printf
 * @format: argument for the function
 * Return: the char_p
 */
int _printf(const char *format, ...)
{
	int char_p = 0;
	va_list list;

	va_start(list, format);

	if (!format)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case '\0':
					break;
				case '%':
					check_null(list, char_p);
					break;
				case 'c':
					print_char(list, char_p);
					break;
				case 's':
					print_string(list, char_p);
					break;
			}
		}
		else
		{
			write(1, format, 1);
			char_p++;
		}
		format++;
		va_end(list);
	}

	return (char_p);
}
