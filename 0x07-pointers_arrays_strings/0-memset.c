#include "main.h"
/**
 * _memset - Function to fill a block memory with byte
 * @s: Starting address of memory to be filled
 * @b: The desired value
 * @n: Number of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
