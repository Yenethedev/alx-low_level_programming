#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function that creates an array and assigns specific char
 * @size: Size of array
 * @c: Char to assign
 * Description: Creates array of size and assigns char c
 * Return: Pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
