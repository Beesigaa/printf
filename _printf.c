#include "main.h"
/**
 *_printf - performs as printf function
 *@format: pointer to char
 *@...: variadic
 * Return - Char count
 */
int _printf(const char *format, ...)
{
	va_list print_args;
	va_start(print_args, format);
	int char_count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
					{
						int num = va_arg(print_args, int);
						char buff[20];

						int_2_str(buff, num);
						_strwrite(buff);
					}
					break;

				case 'f':
					{
						double num = va_arg(print_args, double);
						char buff[20];

						doub_2_str(buff, num, 2);
						_strwrite(buff);
					}
					break;

				case 's':
					{
						const char *str = va_arg(print_args, const char *);
						_strwrite(str);
					}
					break;
				default:
					write(STDOUT_FILENO, "%", 1);
					write(STDOUT_FILENO, format, 1);
					char_count += 2;
					break;
			}
		}

		else
		{
			write(STDOUT_FILENO, format, 1);
			char_count++;
		}

		format++;
	}

	va_end(print_args);
	return (char_count);
}
