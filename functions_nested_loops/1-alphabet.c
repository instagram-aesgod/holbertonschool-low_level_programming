#include "main.h"

/**
 * main - /**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
