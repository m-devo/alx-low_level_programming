#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: the value of x raised to the power of y, or -1 if y is negative
 */

int _pow_recursion(int x, int y)
{
/* Check for negative exponent */
if (y < 0)
{
return (-1);
}

/* Base case: exponent is zero */
if (y == 0)
{
return (1);
}

/* Recursive case: multiply x by x raised to the power of y-1 */
return (x * _pow_recursion(x, y - 1));
}
