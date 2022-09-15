#include <stdio.h>

/**
 * main - prints numbers 1 to 100, followed by a new line,
 * multiples of only 3 replaced with Fizz,
 * multiples of only 5 replaced with Buzz,
 * multiples of both 3 and 5 replaced with FizzBuzz
 * Return: 0 upon successful run
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
	}
	printf("\n");

	return (0);
}
