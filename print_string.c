#include "main.h"


int print_string(va_list list)
{
	int counter = 0;

	const char *my_string = va_arg(list, const char*);

	if(!my_string)
		my_string = "";
	while(*my_string)
	{
		my_putchar(*my_string);
		my_string++;
		counter++;
	}
	return (counter);
}
