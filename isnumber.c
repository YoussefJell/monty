#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/**
 * isNumber - test input is number or not
 * @s: char
 *
 * Return: true or false
 */

bool isNumber(char *s)
{
	size_t i;

	for (i = 0; i < strlen(s); i++)
	{
		if (s[i] == '-')
			i++;
		if (isdigit(s[i]) == false)
			return (false);
	}

	return (true);
}
