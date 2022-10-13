#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap the values of two integers
 * @n: swap the values of a to b
 * @n: swap the values of b to a
 */
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
