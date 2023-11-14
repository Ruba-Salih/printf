#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("");
	printf("\n");
	_printf("There is %d bytes in %d kB\n", 1024, 1);
	printf("There is %d bytes in %d kB\n", 1024, 1);
	_printf("%i", INT_MIN);
	printf("%i", INT_MIN);
	_printf("%d", INT_MIN);
	printf("%d", INT_MIN);
	_printf("%i", 1);
	printf("%i", 1);
	_printf("%d", 0);
	printf("%d", 0);
	_printf("%d", 1);
	printf("%d", 1);
	_printf("iddi%diddiiddi\n", 1024);
	printf("iddi%diddiiddi\n", 1024);
	_printf("%d == %i\n", 1024, 1024);
	printf("%d == %i\n", 1024, 1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%i", INT_MAX);
	printf("%i", INT_MAX);
	_printf("%i", 10000);
	printf("%i", 10000);
	_printf("%i - %i = %i\n", 1024, 2028, -1024);
	printf("%i - %i = %i\n", 1024, 2028, -1024);
	_printf("%d", 10000);
	printf("%d", 10000);
	_printf("%d - %d = %d\n", 1024, 2028, -1024);
	printf("%d - %d = %d\n", 1024, 2028, -1024);
	_printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	printf("%i + %i = %i\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	_printf("%d", INT_MAX);
	printf("%d", INT_MAX);

	return (0);
}
