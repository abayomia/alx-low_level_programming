#include <stdio.h>

/**
 * main - prints alphabet in lowercase, then uppercase
 * using putchar()
 * Return: 0 upon successful run
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	return (0);
}
