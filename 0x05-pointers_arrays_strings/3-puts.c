#include "main.h"
/**
 * _puts - It prints a string, follwd by new line, to stdout
 * @str: String to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
