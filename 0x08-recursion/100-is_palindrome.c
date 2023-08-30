# include "main.h"

/**
 * is_palindrome - Function that checks if
 * string is empty or not.
 *
 * @s: pointer to string to be checked.
 *
 * Return: 1 is string is empty and 0 if not.
 *
 */

int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (check_empty(s, 0, len - 1));
}

/**
 * check_empty - recursive function checks if
 * string is empty or not.
 *
 * @str: pointer which represents string to be checked.
 * @first_char: Represents first characters at the begining
 * of string.
 * @last_char: Represents last characters at end of string.
 *
 * Return: 1 if string is empty or 0 if not.
 *
 */

int check_empty(char *str, int first_char, int last_char)
{
	if (first_char > last_char)
		return (1);

	if (str[first_char] != str[last_char])
		return (0);

	return (check_empty(str, first_char + 1, last_char - 1));
}
