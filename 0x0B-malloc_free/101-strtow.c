#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_words - get the number of words into str
 *@str: string to split
 * Return: int , length number of words
 */

int get_words(char *str)
{
	int i, size = 0;

	for (i = 0; *(str + i); i++)
	{

		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1])
		{
			size++;
		}
	}

	if (str[0] != ' ' && str[0])
	{
		size++;
	}

	return (size);

}


/**
 * **strtow - function that splits a string into words.
 * @str: str to split
 *
 *
 *Return: str splited
 */

char **strtow(char *str)
{
	int size, i, j, columns = 0, k, l;
	char **matrix;

	if (str == NULL || !*str)
		return (NULL);
	size = get_words(str);
	if (!size)
		return (NULL);
	matrix = (char **)malloc(sizeof(char *) * (size + 1));
	if (!matrix)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{

			for (j = 1; str[i + j] && str[i + j] != ' ' ; j++)
				;
			j++;/* Null char */
			matrix[columns] = (char *)malloc(sizeof(char) * j);
			if (!matrix[columns])
			{
				for (k = 0; k < columns; k++)
					free(matrix[columns]);
				free(matrix);
				return (NULL);
			}
			else
			{
				for (l = 0; l < j - 1; l++)
				{
					matrix[columns][l] = str[i + l];
				}
				matrix[columns][l] = '\0';
				columns++;
			}
		}
	}

	return (matrix);
}
