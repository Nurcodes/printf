#include "main.h"

/**
 * print_hex - prints a number in hex
 * @l: va_list
 * @f: pointer
 * Return: the number of char printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '\0')
	{
		count += _puts("0x");
	}
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints a number
 * @l: l
 * @f: pointer
 * Return: the number
 */

int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '\0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - prints to binary
 * @l: l
 * @f: f
 * Return: number
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints to octal
 * @l: l
 * @f: f
 * Return: a number
 */

int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);

	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '\0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
