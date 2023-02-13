#include "main.h"

/**
 * _isalpha - checks if a character is lowercase or uppercase
 * @c: character to check
 *
 * Return: 1 if lowercase, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
