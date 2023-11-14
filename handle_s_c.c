#include "main.h"

/**
 * handle_char - Entry point
 * @ch: va_list
 * Return: nothing
 */
int handle_char(char ch)
{
	fill(ch);
	return (1);
}


/**
 * string_null - Entry point
 * Return: nothing
 */
void string_null(void)
{
	int i;
	char *str = "(null)";
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		fill(str[i]);
	}
}



/**
 * handle_string - Entry point
 * @str: va_list
 * Return: nothing
 */
int handle_string(char *str)
{
	int len;

	len = strlen(str);

	if (len == 0)
	{
		return (-1);
	}

	while (*str)
	{
		fill(*str);
		str++;
	}

	return (len);
}



/**
 * handle_percentage - Entry point
 *
 * Return: nothing
 */
int handle_percentage(void)
{
	fill('%');
	return (1);
}
