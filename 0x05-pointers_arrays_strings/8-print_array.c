#include "main.h"
/**
 * print_array - Entry point
 * @a: A pointer
 * @n: A variable
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
	printf("%d", a[i]);
		if (i < n - 1)
		{
		printf(", ");
		}
		i++;
	}
	printf("\n");
}
