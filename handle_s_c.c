#include "main.h"

/**
 * handle_char - Entry point
 * @inf: va_list
 * Return: nothing
 */
int handle_char(va_list inf)
{
	fill((char)(va_arg(inf, int)));
	return (1);
}


/**
 * string_null - Entry point
 * 
 * Return: nothing
 */
int string_null()
{
	int i;
	char *str = "(null)";
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		fill(str[i]);
	}

	return (len);
}



/**
 * handle_string - Entry point
 * @inf: va_list
 * Return: nothing
 */
int handle_string(va_list inf)
{
	char *str;
	int len;

	len = strlen(str);
	str = va_arg(inf, char *);

	if (str == NULL)
		return;

	while(*str)
	{
		fill(*str);
		str++;
	}

	return (len);
}



/**
 * handle_percentage - Entry point
 * @inf: va_list
 * Return: nothing
 */
int handle_percentage(va_list inf)
{
	fill('%');
	return (1);
}
