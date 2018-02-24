#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

void buffer_const_char(char **format, char *buffer, unsigned int *len)
{
		while (**format != 0 && **format != '%')
		{
			buffer[(*len)++] = **format;
			(*format)++;
		}
}

int _printf(char *format, ...)
{
	char *tmp, buffer[1024], tmpstr[2] = {0, 0};
	unsigned int len = 0, bufflen = 0;
	unsigned long int printtotal = 0;
	va_list list;

	va_start(list, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case '%':
				tmpstr[0] = '%';
				tmp = tmpstr;
				break;
			case 'c':
				tmpstr[0] = (char) va_arg(list, int);
				tmp = tmpstr;
				break;
			case 's':
				tmp = va_arg(list, char *);
			}
			format++;
			while (*tmp)
				buffer[len++] = *tmp++;
		}
		else
			buffer_const_char(&format, buffer, &len);
	}
	write(1, buffer, len);
	printtotal += len;
	return (printtotal);
}
