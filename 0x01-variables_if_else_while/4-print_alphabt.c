#include <stdio.h>

/**
 * main - prints lowercase alphabets except 'q' and 'e'
 * using putchar()
 * Return: 0 upon successful run
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' || ch != 'e')
			putchar(ch);
	putchar('\n');
	return (0);
}
