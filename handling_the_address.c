#include "main.h"
/**
 * handle_address - prints address
 * @inf: list argument
 * Return: number of printed arguments
*/
int handle_address(va_list inf)
{
	char buffer[64];
	int n, i;

	n = 0;
	sprintf(buffer, "%p", inf);
	for (i = 0; buffer[i] != '\0'; i++)
	{
		fill(buffer[i]);
		n++;
	}
	return (n);
}
