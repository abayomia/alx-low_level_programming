#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * using only putchar()
 * Return: 0 upon successful run
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		putchar(ch);
		ch++
	putchar('\n');
	return (0);
}
