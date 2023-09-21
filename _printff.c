#include "main.h"

/**
 * _printf-function prints all aguments of standard printf
 * @format: A pointer to the string
 * @...: list of arguments in it recieves.
 * Return: Always 0. (SUCCESS)
 */

int _printf(const char *format, ...)
{
	char s;
	va_list printargs;
	int i;
	int numcount = 0;

	va_start(printargs, format);
	if (format == NULL)
	{
		return (-1);
	}

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c' || format[i] == 'd' ||
					format[i] == 's' || format[i] == 'i')
			{
				numcount += sel_handler(format[i])(printargs);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				numcount++;
			}
			else
			{
				s = format[i];
				_putchar(s);
				numcount++;
			}
		}
		else
		{
			numcount += _putchar(format[i]);
		}
	}
	va_end(printargs);
	return (numcount);
}
