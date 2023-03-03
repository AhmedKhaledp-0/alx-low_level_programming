#include"main.h"

/**
 * leet - main function
 * @str: char
 * Return: str
 */
char *leet(char *str)
{
	char *letters = "AEOTL";
	char *nums = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j] || str[i] == letters[j] + 32)
			{
				str[i] = nums[j];
				break;
			}
		}
	}
	return (str);
}
