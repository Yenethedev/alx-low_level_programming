#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number
 * @n: The number to be printed in binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int len = sizeof(unsigned long int) * 8;

	while (len--)
	{
		if ((mask << len) & n)
			_putchar('1');
		else if (len == 0 || _putchar('0'))
			return;
	}
}
