#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: That is the character to be checked
 * Return: 1 for lowercase characrer or 0 for anything else
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{

		return (1);
	}
	return (0);
}
