#include "main.h"


/**
 * handle_newline - prints binary
 * Return: number of printed arguments
 */
int handle_newline(void)
{
	puts("");
	return (0);
}

/**
 * handle_binary - prints binary
 * @inf: list argument
 * Return: number of printed arguments
 */
int handle_binary(va_list inf)
{
	unsigned int b, a;
	int s, i, binary, n;
	int *ptr;

	b = va_arg(inf, unsigned int);
	a = 0;

	if (b < a)
		b = -b;

	binary = b;
	s = 0;
	n = 0;
	while (b / 2 != 0)
	{
		s++;
		b /= 2;
	}
	s++;
	ptr = malloc(s * sizeof(int));
	if (ptr == NULL)
	{
		return (0);
	}
	for (i = s; i >= 0; i--)
	{
		binary /= 2;
		ptr[i] = binary % 2;
	}
	for (i = 0; i < s; i++)
	{
		fill(ptr[i] + '0');
		n++;
	}
	free(ptr);
	return (n);
}
