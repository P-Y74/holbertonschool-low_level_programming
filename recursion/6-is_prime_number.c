#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: Number to check for primality
 *
 * Return: The result of a recursive check for primality
 */
int is_prime_number(int n)
{
	int i = 2;

	return (isPrime(n, i));
}

/**
 * isPrime - Recursively check if a number is prime
 * @n: Number to check
 * @i: The current divisor being tested to check if n is divisible
 *
 * Return: The fonction that recursively check if a number is prmie
 */
int isPrime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (isPrime(n, i + 1));
}
