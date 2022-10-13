#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swap the values of two integers
 * @n: swap the values
 */
void swap_int(int *a, int *b)
/**
 * swap_int - check if it swaps the values
 *@n: swap the values of a to b
 *
 * Return: 1 if the values have been swapped
 */
{
	int change = *a;
	*a = *b;
	*b = change;
}
