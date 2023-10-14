#include<stdio.h>
#include<stdarg.h>
/**
 * _printf - sum all arguements
 * @format: number of arguements
 * Return: 0 is n is 0 or return sum
 */
int _printf(const char *format, ...)

va_list text;

	va_start(text, format);
{

	int sum = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				int c = va_arg(text, int);

				putchar(c);
				sum++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(text, char*);

				while (*str != '\0')
				{
					putchar(*str);
					str++;
					sum++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				sum++;
			}
		}
		else
		{
			putchar(*format);
			sum++;
		}

		format++;
	}
	va_end(text);
	return (sum);
}
