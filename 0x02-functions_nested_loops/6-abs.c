#include "main.h"

/**
 * int_abs - computes the absolute value of an integer.
 * @c: integer to be computed
 * Returns: absolute value or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
