#include "main.h"
#include <stdio.h>

/**
 * is_prime_recursive - recursively checks if n is a prime number
 *
 * @n: the number to check
 * @i: the current divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_recursive(int n, int i)
{
/* Base case: 2 is a prime number */
if (n <= 2)
{
return ((n == 2) ? 1 : 0);
}

/* Base case: n is divisible by i */
if (n % i == 0)
{
return (0);
}

/* Base case: all divisors tested */
if (i * i > n)
{
return (1);
}

/* Recursive case: test next divisor */
return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - checks if n is a prime number
 *
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
/* Check for values less than or equal to 1 */
if (n <= 1)
{
return (0);
}

/* Check if n is prime using recursive helper function */
return (is_prime_recursive(n, 2));
}

