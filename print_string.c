#include "main.h"


int print_string(va_list list, int counter)
{
	const char *my_string = va_arg(list, const char*);

	if(my_string != NULL)
		my_string = "";
	if(*my_string)
	{
		my_putchar(*my_string);
		my_string++;
		counter++;
	}
	return (counter);
}
