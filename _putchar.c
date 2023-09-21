/**
 * _putchar -Function prints characters
 * @c: the variable passed to char
 * Return: 1
 */

#include "main.h"
int _putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
