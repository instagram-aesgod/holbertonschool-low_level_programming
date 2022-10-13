#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap the values of two integers
 * @b: swap the values to a
 * @a: swap the values to b
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
