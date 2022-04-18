#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes
 * @c: c
 * Return: 1
 */

int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}

	return (1);
}

/**
 * _puts - prints
 * @str: pointer
 * Return: number
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}
