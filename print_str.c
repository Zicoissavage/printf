#include "main.h"
/**
 * _strlen - finds and Returns the lenght of a string.
 * @str: string pointer
 * Return: integer.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
/**
 * _strlenc - strlen function but applied for constant char pointer str
 * @str: char pointer
 * Return: integer.
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}
