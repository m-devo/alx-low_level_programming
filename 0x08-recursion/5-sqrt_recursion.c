#include "main.h"
#include <stdio.h>

/**
 * calculate_sqrt - calculates the natural square root of n recursively
 *
 * @n: the number to calculate the square root of
 * @i: the current guess for the square root
 *
 * Return: the square root of n if found, otherwise -1
 */

int calculate_sqrt(int n, int i)
{
/* Base case: square root found */
if (i * i == n)
{
return (i);
}

/* Base case: square root not found */
if (i * i > n)
{
return (-1);
}

/* Recursive case: increment guess and try again */
return (calculate_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 *
 * @n: the number to calculate the square root of
 *
 * Return: the natural square root of n, or -1 if n does not have
 *         a natural square root
 */

int _sqrt_recursion(int n)
{
/* Check for negative input */
if (n < 0)
{
return (-1);
}

/* Base case: square root of 0 is 0 */
if (n == 0)
{
return (0);
}

/* Recursive case: find square root using helper function */
return (calculate_sqrt(n, 1));
}

