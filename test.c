//#include main.h
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
	
	for(ss=0; ss< strlen(*format); ss++)
	{
		if(format == '%')
		printf('%'); 
		else if(format == 's')
		char value = va_args(ss, format)
		printf("%s", format);
		else if(format == 'c')
		int value = va_args(ss, format);
		printf("%c", format);
		else
		printf(*format);
	}
	format ++;
va_end(ss);
}

