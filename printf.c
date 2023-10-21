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
	int i, count, d, j;
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
							fputc(d, stdout);
							count++;
							break;
						}
					case 's':
						{
							s = va_arg(args, char *);
							for (j = 0; s[j] != '\0'; j++)
							{
								fputc(s[j], stdout);
								count++;
							}
							break;
						}
					case 'd':
						{
							d = va_arg(args, int);
							fputc(d, stdout);
							count++;
							break;
						}
					case 'i':
						{
							d = va_arg(args, int);
							fputc(d, stdout);
							count++;
							break;
						}
					default:
						{
							fputc(str[i], stdout);
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
