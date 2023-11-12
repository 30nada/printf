#include "main.h"

/**
 * printf_string - print string
 * @val: argument
 * return: the lenght of the string
 */
int printf_string(va_list val)
{
	char *str;
	int i;
	int lenght;

	str = va_arg(val, char *);
	if (str == NULL)
	{
	str = "(null)"
	lenght = _strlen(str);
	for (i = 0; i < lenght; i++)
	_putchar(str[i]);
	return (lenght);
	}
	else
	{
	lenght = _strlen(str);
	for (i = 0; i < lenght; i++)
	_putchar(str[i]);
	return (lenght);
	}
}
