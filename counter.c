#include "main.h"

/**
 * print_thenum-function counts and returns the number of
 * @num: number to be printed
 * @incre: number to be incremented
 * Return: the integer counted
 */

int print_thenum(long num, int incre)
{
	if (num < 0)
	{
		_putchar('-');
		incre++;
		num = num * -1;
	}
	if (num / 10)
	{
		incre = print_thenum(num / 10, incre);
	}
	_putchar(num % 10 + '0');
	return (incre + 1);
}
