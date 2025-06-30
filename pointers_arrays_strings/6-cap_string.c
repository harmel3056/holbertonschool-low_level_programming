#include "main.h"

/**
 * is_separator - establishes separators
 * @c: denotes valid  separators
 *
 * Description: identifies separators to drive cap_string
 * Return: characters
 */

int is_separator(char c)
{
	return (
	c == ' '  || c == '\t' || c == '\n' ||
	c == ','  || c == ';'  || c == '.'  ||
	c == '!'  || c == '?'  || c == '"'  ||
	c == '('  || c == ')'  || c == '{'  || c == '}'
	);
}

/**
 * cap_string - capitalises first letter of each word
 * @s: string we're working on
 *
 * Description: capitalises letters after is_separator
 * Return: char s
 */

char *cap_string(char *s)
{
	int c = 0;
	int cap_next = 1;

	while (s[c] != '\0')
	{
		if (is_separator(s[c]))
		{
			cap_next = 1;
		}
		else if (cap_next && s[c] >= 97 && s[c] <= 122)
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
