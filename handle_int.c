#include "main.h"

/**
 * number_of_digits - Entry point
 * @num: int
 * Return: nothing
 */
int number_of_digits(int num)
{
	int len = 0;

	while (num != 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}



/**
 * handle_integer - Entry point
 * @inf: va_list
 * Return: nothing
 */
int handle_integer(va_list inf)
{
	long int num, len, i;
	char *arr;

	num = va_arg(inf, int);
	len = number_of_digits(num);
	i = 0;

	if (num < 0)
	{
		fill('-');
		num = -num;
	}

	arr = malloc(sizeof(char) * len);
	while (num != 0)
	{
		arr[i] = '0' + (num % 10);
		num /= 10;
		i++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		fill(arr[i]);
	}
	free(arr);
	return (len);
}
