#include "main.h"
/**
 * swap_int - Entry point
 * @a: A pointer
 * @b: A pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
		
