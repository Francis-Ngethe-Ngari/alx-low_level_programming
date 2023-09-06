#include "main.h"

/**
 * strtow - Function to split strings into words.
 *
 * @str: represents the string to be split.
 *
 * Return: pointer to array of strings.
 *
 */

char **strtow(char *str)
{
	int count_words;
	int *temp;
	int **words;
	int trav;
	char *word_start;
	int word_len;
	int itr;

	if (str == NULL || *str == '\0')
		return (NULL);
	count_words = 0;
	temp = str;
	while (*temp != '\0')
	{
		while (*temp == ' ')
			temp++;
	}
	if (*temp != '\0')
	{
		count_words++;
		while (*temp != ' ' && *temp != '\0')
			temp++;
	}
	words = (char **)malloc((count_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	trav = 0;
	temp = str;
	while (*temp != '\0')
	{
		while (*temp == ' ')
			temp++;
	}
	if (*temp != '\0')
	{
		word_start = temp;
		while (*temp != ' ' && *temp != '\0')
			temp++;
	}
	word_len = temp - word_start;
	words[trav] = (char *)malloc((word_length + 1) * sizeof(char));
	if (words[trav] == NULL)
	{
		for (itr = 0; itr < trav; itr++)
			free(words[itr]);
		free(words);
		return (NULL);
	}
	strncpy(words[trav], word_start, word_len);
	words[trav][word_len] = '\0';
	trav++;
	words[count_words] = NULL;
	return (words);
}

