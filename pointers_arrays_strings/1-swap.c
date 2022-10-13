/**
 * 1-swap.c - Swap the values of two integers
 * @n: swap the values
 */
void swap_int(int *a, int *b)

{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	_putchar(" 98 ");
	scanf("%d", &a);
	_putchar("\n 42 ");
	scanf("%d", &b);
	swap(&a, &b);
	_putchar("n: x = %d, y = %d", a, b);
	return 0;
}
