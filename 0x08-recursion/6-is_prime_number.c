#include "main.h"
/**
 * is_prime_number - functions finds the prime number
 * @prinme: input integer
 * Return: 1 if integer 0 otherwise
 */
int is_prime_number(int n)
{
	if (prime <= 1 )
		return (0);
	else if (prime == 2)
		return (1);
	else if (prime % 2 == 0 || prime % 3 == 0 || prime % 5 == 0)
		return (0);
	else if (prime % 7 == 0 || prime % 9 == 0)
		return (0);
	else 
		return (1);
}
