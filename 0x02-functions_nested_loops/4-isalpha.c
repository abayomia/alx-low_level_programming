#include "main.h"

/**
 * _isalpha - checks if character is a letter in alphabet
 * @c: character to check
 * Return: 1 if c is in alphabet, 0 if otherwise
 */
int _isalpha(int c)
{
       return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
