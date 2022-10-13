#include "main.h"
#include <stdio.h>
/**
 * 1-swap.c - Swap the values of two integers
 * @n: swap the values
 */
void swap_int(int *a, int *b)
{
	int change = *a;
	*a = *b;
	*b = change;
}
