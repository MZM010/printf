#include "main.h"
/**
 * print_all - prints like printf
 * @format: argument for the function
 */
int _printf(const char *format, ...)
{
	int char_p = 0, len = 0;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (format != '%')
			check_null(char_p, format);
		else
		{
			format++;
			switch (*format)
			{
				case '\0':
					break;
				case '%':
					check_null(char_p, format);
				case 'c':
					print_char(list, char_p);
				case 's':
					print_string(len, list, char_p);
			}
		}
		format++;
		va_end(list);
		retrun(char_p);
	}
}
