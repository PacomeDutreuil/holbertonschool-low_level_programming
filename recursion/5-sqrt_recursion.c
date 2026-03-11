#include "main.h"
/**
 * sqrt_helper - Helper function to find the square root recursively
 * @n: The number whose square root is to be found
 * @i: The current divisor to check
 * Return: The square root of n if it exists, otherwise -1
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	return (-1);
	if (i * i == n)
	return (i);
	return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 * Return: The natural square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	return (sqrt_helper(n, 0));
}
