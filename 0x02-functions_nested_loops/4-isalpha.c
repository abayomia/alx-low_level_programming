#include "main.h"

/**
 * _isalpha - checks if character is a letter in alphabet
 * @c: character to check
 * Return: 1 if c is in alphabet, 0 if otherwise
 */
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
