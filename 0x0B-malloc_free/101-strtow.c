#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The string to count the words of
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0, in_word = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == ' ')
		{
			if (in_word)
			{
				in_word = 0;
				++count;
			}
		}
		else
		{
			in_word = 1;
		}
	}

	if (in_word)
	{
		++count;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: A pointer to an array of strings (words), or NULL if failed
 */
char **strtow(char *str)
{
	int i, j, k, count = 0, len;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	count = count_words(str);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; j < count; ++j)
	{
		while (str[i] == ' ')
		{
			++i;
		}
		len = 0;
		while (str[i + len] != ' ' && str[i + len] != '\0')
		{
			++len;
		}
		words[j] = malloc(sizeof(char) * (len + 1));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; ++k)
			{
				free(words[k]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[j], &str[i], len);
		words[j][len] = '\0';
		i += len;
	}
	words[count] = NULL;
	return (words);
}
