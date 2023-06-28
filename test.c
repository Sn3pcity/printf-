#include "main.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>

/*
*@format : char string
*return 0
*/

int _printf(const char *format, ...)
{
	va_list ss;

	va_start(ss, *format);

	while (format[ss] != '\0')
	{
		if (*format == '%')
		printf("%%");
		else if (format == 's')
		va_arg(ss, *format);

		printf("%s", format);
		else if (format == 'c')
		va_arg(ss, *format);

		printf("%c", format);

		else
		printf(*format);
	}
	format++;
va_end(ss);
}

