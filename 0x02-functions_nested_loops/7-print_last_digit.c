#include "main.h"
 /**
  * print_last_digit - last digit
  * @n: the int to print
  * Return: always 0
  */
int print_last_digit(int n)
{
	int t;

	if (n < 0)
	{
		t = (-1 * (n % 10));
		_putchar(t + '0');
		return (t);
	}
	else
	{
		t =(n % 10);
		_putchar(t + '0');
		return (t);
	}
}
