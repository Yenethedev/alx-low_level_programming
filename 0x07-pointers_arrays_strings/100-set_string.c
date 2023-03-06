#include "main.h"

/**
 * set_string - Func to set value of a pointer to a char
 * @s: Pointer to pointer
 * @to: Pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
