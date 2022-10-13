#include<stdio.h>
#include<main.h>
/**
 * 1-swap.c - Swap the values of two integers
 * @n: swap the values
 */
void swap_int(int *a, int *b);
void main()
{
    int a, b;
    printf(" a=98 ");
    scanf("%d", &a);
    printf("b=42 ");
    scanf("%d", &b);
    swap(a, b);
    getch();
}
int swap(int a, int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    printf("\n\nThe value of a is %d.\n", a);
    printf("The value of b is %d.\n", b);
}
