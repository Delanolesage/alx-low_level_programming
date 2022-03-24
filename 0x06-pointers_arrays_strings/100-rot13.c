#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: the string
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char letters1[] = {"ABCDEFGHIJKLMNOPQRSTUVwXYZabcdefghijklmnopqrstuvwxyz"};
	char letters2[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters1[j] != '\0'; j++)
		{
			if (s[i] == letters1[j])
			{
				s[i] = letters2[j];
			}
		}
	}
	return (s);
}
