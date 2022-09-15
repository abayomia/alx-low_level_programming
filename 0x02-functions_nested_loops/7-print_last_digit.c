#include "main.h"

/**
 * print_last_digit - prints last digit of a number using _putchar
 * @n: int input to extract last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar('0' + a);

	return (a);
}
