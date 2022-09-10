#include <stdio.h>

/**
 * main - prints lowercase alphabet in reverse followed by new line
 * using putchar()
 * Return: 0 upon successful run
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
