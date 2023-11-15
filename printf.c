#include "main.h"

/**
 * fill - Entry point
 * @ch: char
 * Return: buffer content
 */

void fill(char ch)
{
	static char buffer[BUFFER_SIZE];
	static int size;

	size = 0;
	buffer[size++] = ch;

	if (size == BUFFER_SIZE)
	{
		write(1, buffer, size);
		size = 0;
	}
	else if (size > 0)
		write(1, buffer, size);
}


/**
 * switch_specifier - Entry point
 * @inf: va_list
 * @specifier: char
 * Return: nothing
 */
int switch_specifier(char specifier, va_list inf)
{
	char *str;

	int count = 0;

	switch (specifier)
	{
		case 'c':
			count = handle_char((char) va_arg(inf, int));
			break;
		case 's':
			str = va_arg(inf, char *);
			if (str == NULL)
			{
				string_null();
				return (6);
			}
			count = handle_string(str);
			break;
		case '%':
			count = handle_percentage();
			break;
		case 'd':
			count = handle_integer(inf);
			break;
		case 'i':
			count = handle_integer(inf);
			break;
		case 'b':
			count = handle_binary(inf);
	}

	return (count);
}


/**
 * if_specifier - Entry point
 * @inf: va_list
 * @ch: char
 * Return: 0
 */
int if_specifier(char ch, va_list inf)
{
	char *str = "csid%";
	int value = 0;

	while (*str)
	{
		if (ch == *str)
		{
			value = switch_specifier(ch, inf);
			break;
		}
		str++;
	}
	return (value);
}

/**
 * _printf - Entry point
 * @format: char
 * Return: len
 */
int _printf(const char *format, ...)
{
	va_list inf;

	int i = 0;
	int flag = 0;
	int count = 0;

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);

	va_start(inf, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			flag = if_specifier(format[i + 1], inf);
			count += flag;
		}

		if (flag == 0)
		{
			fill(format[i++]);
			count++;
		}
		else
		{
			i += 2;
			flag = 0;
		}
	}
	va_end(inf);
	return (count);
}
