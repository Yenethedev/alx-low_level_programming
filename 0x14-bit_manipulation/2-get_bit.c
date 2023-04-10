#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: The number the bit is searched in
 * @index: The index, starting from 0 of the bit to get
 * Return: Value of the bit at index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitsize;

	bitsize = sizeof(n) * 8;

	if (index >= bitsize)
		return (-1);

	return ((n >> index) & 1);
}
