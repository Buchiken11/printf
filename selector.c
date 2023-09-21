#include "main.h"

/**
 * *sel_handler - Function to check the string that was passed to it.
 * @str: a pointer to string
 * Return: the handlers
 */

int (*sel_handler(char str))(va_list printarg)
{
	if (str == 'c')
	{
		return (&character_handler);
	}
	else if (str == 'd')
	{
		return (&digit_handler);
	}
	else if (str == 's')
	{
		return (&string_handler);
	}
	else if (str == 'i')
	{
		return (&integer_handler);
	}
	return (0);
}

