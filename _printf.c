#include "main.h"
/**
 * print_all - prints like printf
 * @format: argument for the function
 */
void print_all(const char * const format, ...)
{
	int char_p = 0, len = 0;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	while (*format)
	{
		if (format != '%')
		{
			write(1, format, 1);
			char_p++;
		}
		else
		{
			format++;
			switch (*format)
			{
				case '\0':
					break;
				case '%':
					write(1, format, 1);
					char_p++;
				case 'c':
					char c = va_arg(list, int);

					write(1, &c, 1);
					char_p++;
				case 's':
					char *str = va_arg(list, char*);

					while (str[len] != '\0')
						len++;
					write(1, str, len);
					char_p += len;
			}
		}
		format++;
		va_end(list);
		retrun(char_p);
	}
}
