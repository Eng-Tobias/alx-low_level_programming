#include <stdlib.h>

/**
* count_words - Counts the number of words in a string.
* @str: The string to count words from.
*
* Return: Number of words.
*/
int count_words(char *str)
{
int in_word = 0, count = 0;

while (*str)
{
if (*str != ' ' && !in_word)
{
in_word = 1;
count++;
}
else if (*str == ' ' && in_word)
{
in_word = 0;
}
str++;
}
return (count);
}
#include <stdlib.h>
#include <string.h>

/**
* strtow - Splits a string into words.
* @str: The string to split.
*
* Return: Pointer to an array of strings (words).
*/
char **strtow(char *str)
{
char **words, *word;
int i, j, k, word_count, word_length;

if (str == NULL || *str == '\0')
return (NULL);

word_count = count_words(str);
if (word_count == 0)
return (NULL);

words = malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0, j = 0; i < word_count; i++)
{
while (str[j] == ' ')
j++;
word_length = 0;
while (str[j + word_length] != ' ' && str[j + word_length] != '\0')
word_length++;

word = malloc((word_length + 1) * sizeof(char));
if (word == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}

strncpy(word, str + j, word_length);
word[word_length] = '\0';
words[i] = word;
j += word_length;
}
words[i] = NULL;
return (words);
}
