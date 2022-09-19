#include "main.h"
/**
 * _puts - Entry point
 * @str: A pointer
 * Return: 0
 */

void _puts(char *str)
{
	char *a;
	int i;

	a = str;

	for (i = 0; a[i]; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
