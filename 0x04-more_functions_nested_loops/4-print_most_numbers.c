#include "main.h"

/**
 * prints_most_number - prints numbers 0 to 9,
 * omitting 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0')
		}
	}
	_putchar('\n');
}
