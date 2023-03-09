#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * is_palindrome_recursive - 1 if a string is a palindrome and 0 if not.
 * @s: char
 * @left: int
 * @right: int
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome_recursive(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	if (s[left] != s[right])
	{
		return (0);
	}
	return (is_palindrome_recursive(s, left + 1, right - 1));
}
/**
 * is_palindrome - 1 if a string is a palindrome and 0 if not.
 * @s: char
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
