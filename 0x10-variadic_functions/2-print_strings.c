/*
 * File: 2-print_strings.c
 * Auth: Busari Muhammed
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: The string to be printed between strings
 * @n: The number of strings passed to the function
 * Return: Always 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
