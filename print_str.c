#include "main.h"

/**
 * _strlen - return the lenght of string
 * @str: string pointer
 * return: 1
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	return (i);
}
/**
 * _strlen - strlen function but applied for constant char pointer str
 * @str: char pointer
 * return: i
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	return (i);
}
