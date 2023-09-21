#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int character_handler(va_list printarg);
int digit_handler(va_list printarg);
int integer_handler(va_list printarg);
int string_handler(va_list printarg);
int _printf(const char *format, ...);
int print_thenum(long num, int incre);
int (*sel_handler(char str))(va_list printarg);
int _putchar(char c);

#endif
