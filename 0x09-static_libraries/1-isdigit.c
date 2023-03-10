#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @x: the character to be checked
 * Return: 1 if the character is a digit, 0 otherwise
 */

int _isdigit(int x)

{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
