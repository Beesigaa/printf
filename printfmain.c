#include "main.h"
/**
  * _printf - display strings to stdout
  * @format: pointer to string
  * @...: for multiple argument
  * Return: return string length
  */
int _printf(const char *format, ...)
{
	int p = 0;
	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_list, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			p++;
		}
		else
		{
			format++;
			else if (*format == '\0')
				break;
			else if (*format == '%')
			{
				write(1, format, 1);
				p++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(arg_list, int);

				write(1, &c, 1);
				p++;
			}
			else if (*format == 's')
			{
				char *s = va_arg(arg_list, char*);

				write(1, s, strlen(s));
				p += strlen(s);
			}
		}
		format++;
	}
	va_end(arg_list);
	return (p);
}
