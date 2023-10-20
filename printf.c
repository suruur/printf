#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - print
 * @format: first arg
 * @:
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, count, d;
	char *str, *s;

	count = 0;
	str = (char *)format;
	va_start(args, format);

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			i++;
			if (i != '\0')
				switch (i)
				{
					case 'c':
						{
							d = va_arg(args, int);
							putchar(d);
							count++;
							break;
						}
					case 's':
						{
							s = va_arg(args, char *);
							puts(s);
							count += strlen(s);
						}
					default:
						{
							putchar(str[i]);
							count++;
						}
				}
		}
		else
		{
			putchar(str[i]);
			count++;
		}
	}
	va_end(args);

	return (count);
}
