#include "main.h"

/**
 * _printf - printf like-function
 * @format: mandatory parameter
 * @...: variadic parameters
 * Return: count
 */

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	unsigned int num = 0;

	for (int i = 0; format[i] != '\0'; i++)
		if (format[i] != '%')
		{
			write("%c", format[i]);
		}
		else
		{
			switch (format[i + 1])
			{
				case 'u':
					num = va_arg(args, int);
					write("%u", num);
					break;
				case 'o':
					num = va_arg(args, int);
					write("%o", num);
					break;
				case 'x':
					num = va_arg(args, int);
					write("%x", num);
					break;
				case 'X':
					num = va_arg(args, int);
					write("%X", num);
					break;
				default:
					putchar(*format);
					count++;
					break;
			}
			format++;
		}
	va_end(args);
	return (0);
}
