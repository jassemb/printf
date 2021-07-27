#include "holberton.h"

/**
 * print_rev_string - print reverse string
 *@arg: argument of type va_list
 * Return: count
 */
int print_rev_string(va_list arg)
{
	char *str;
	int i, count = 0, len;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(llun(";

	while (str[i] != '\0')
		i++;

	for (len = i - 1; len >= 0; len--)
	{
		_putchar(str[len]);
		count++;
	}
	return (count);
}

/**
 * print_rot13 - print rot string
 * @arg: argument of type va_list
 * Return:str
 */
int print_rot13(va_list arg)
{
	char *str;
	int i, j;
	char ch1[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char ch2[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	str = va_arg(arg, char *);
	if (str == NULL)
	{
		str = "(ahyy)";
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == ch1[j])
			{
				str[i] = ch2[j];
				_putchar(str[i]); j = 53;
			}
		}
	}
	return (i);
}
