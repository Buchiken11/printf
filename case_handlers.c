#include "main.h"

/**
 * character_handler-functions checks for format specifiers
 * @printarg: decleration to to va_list
 * Return: count incremented
 */

int character_handler(va_list printarg)
{
	int incre;
	char get_char = va_arg(printarg, int);

	incre = _putchar(get_char);
	return (incre);
}
/*Digit */
/**
 * digit_handler-fuction prints the digit with d case
 * @printarg: decleration to va_list
 * Return: count incremented
 */
int digit_handler(va_list printarg)
{
	int incre;
	int value = va_arg(printarg, int);

	incre = print_thenum(value, 0);
	return (incre);
}
/**
 * integer_handler-function prints integer with case i
 * @printarg: decleration to va_list
 * Return: count incremented
 */
int integer_handler(va_list printarg)
{
	int incre;
	int value_in = va_arg(printarg, int);

	incre = print_thenum(value_in, 0);
	return (incre);
}
/**
 * string_handler-function prints the string passed to it with s
 * @printarg: decleration to va_list
 * Return: count incremented
 */
int string_handler(va_list printarg)
{
	int incre = 0;
	char *ptr = va_arg(printarg, char *);

	if (ptr == NULL)
	{
		ptr = "(null)";
	}
	while (*ptr)
	{
		incre += _putchar(*ptr);
		ptr++;
	}

	return (incre);
}
