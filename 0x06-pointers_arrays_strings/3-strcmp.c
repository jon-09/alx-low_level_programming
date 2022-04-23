#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: A pointer to a character that will be changed
 * @s2: A pointer to a character that will also be changed
 * Return: Returns the result after comparison
 */
int _strcmp(char *s1, char *s2)
{
	char *ex = s1;
	char *zed = s2;

	while (ex != '\0' && zed != '\0' && ex == zed)
	{
		ex++;
		zed++;
	}
	return (ex - zed);
}
