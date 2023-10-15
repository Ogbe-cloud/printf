#include "main.h"

/**
 * _printf - printf like-function
 * @format: mandatory parameter
 * @...: variadic parameters
 * Return: zero (0)
 *
 */
int _printf(const char *format, ...)
{
	int value;
	va_list args;

	va_start(args, format);

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
		}
		else
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
			{
				value = va_arg(args, int);

				_length(value);
			}
			else
			{
				write(1, &format[i], 1);
			}
			i++;
		}
	}

	va_end(args);

	return (0);
}

