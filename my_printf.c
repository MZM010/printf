#include "main.h"

int _printf(const char *format, ...)
{
	va_list list;
	int counter = 0;

	va_start(list, format);
	while(*format)
	{
		if (*format == '%')
		{
			format++;
			switch(*format)
			{
				case '%':
					print_percent(counter);
				case 'c':
					print_char(list, counter);
				case 's':
					print_string(list, counter);
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
