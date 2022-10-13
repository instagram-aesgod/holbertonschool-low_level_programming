/**
 * 1-swap.c - Swap the values of two integers
 * @n: swap the values
 */
void swap_int(int *a, int *b);
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);
	return (0);
}
