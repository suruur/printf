#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * task0s - prints 
 *
 * Return: void
 */
void task0s(char *s)
{
	int i,c;

	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
		c++;
	}
}
