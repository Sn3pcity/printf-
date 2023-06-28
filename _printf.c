#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>

/**
 *_printf - function to check printf parameters
 *@format: character string
 *@...: other character
 *Return: printed characters
 */

int _printf(const char *format, ...)
{
	int l = strlen(format);
	va_list ss;

	int k = 0;

	va_start(ss, format);

	for (; k <= l; k++)
	{
	if (format[l] == '%')// && format[l] == 'c')
	{
		int k = va_arg(ss, char);


		printf("%c", k);
	}

	//else 
		if (format[l] == '%' )//&& format[l] == 's')
	{
		printf("%d", k);
	}
	va_end(ss);

		int main(void)
		{
			char susan  = 'j';

		}
	}
	return (0);

}

