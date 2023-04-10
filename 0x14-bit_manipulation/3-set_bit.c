#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index
 * @n: A pointer ro the number
 * @index: The index, starting from 0 of the bit that is to be set
 * Return: 1 on Success, -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1 << index);

	return (1);
}
