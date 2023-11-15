#include "main.h"
/**
 * handle_binary - prints binary
 * @inf: list argument
 * Return: number of printed arguments
*/
int handle_binary(va_list inf)
{
	unsigned int b;
	int s, i, binary, n;
	int *ptr;

	b = va_arg(inf, unsigned int);
	binary = b;
	s = 0;
	n = 0;
	while (b / 2 != 0)
	{
		s++;
		b /= 2;
	}

	ptr = malloc(s * sizeof(int));
	if (ptr == NULL)
	{
		return (0);
	}
	for (i = s - 1; i >= 0; i--)
	{
		ptr[i] = binary % 2;
		binary /= 2;
	}
	for (i = s; i >= 0; i--)
	{
		fill(ptr[i] + '0');
		n++;
	}
	free(ptr);
	return (n);
}
