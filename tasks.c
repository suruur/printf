#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * task0s - prints
 * @s: str
 * Return: int
 */
int task0s(char *s)
{
	int i,c;

	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
		c++;
	}

	return (c);
}
