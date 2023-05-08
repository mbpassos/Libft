/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbrito-p <mbrito-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:46:05 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/26 20:46:05 by mbrito-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting ’s’ using the
// character ’c’ as a delimiter. The array must end
// with a NULL pointer
// #include <stdio.h>
// #include <stdlib.h>

#include "libft.h"
// This function counts the number of words in a string.
// It takes a string s and a delimiter c as inputs.
// It returns the number of words in the string.
static int  ft_count_words(const char *s, char c)
{
    int i;  // variable to iterate over string
    int words;  // variable to count number of words
    i = 0;
    words = 0;
    while (s[i])
    {
        if (s[i] != c)  // if character is not a delimiter
        {
            words++;  // increase word count
            while (s[i] && s[i] != c)  // iterate till delimiter is found
                i++;
        }
        else
            i++;  // skip delimiter
    }
    return (words);
}

// This function splits the string s into a word using delimiter c.
// It takes a string s and a delimiter c as inputs.
// It returns the split word as a char pointer.
static char *word_splitter(const char *s, char c)
{
    char    *word;  // pointer to split word
    int     i;  // variable to iterate over string
    i = 0;
    while (s[i] && s[i] != c)  // iterate till delimiter is found
        i++;
    word = (char *) malloc(sizeof(char) * (i + 1));  // allocate memory for split word
    if (!word)
        return (NULL);  // return NULL if memory allocation fails
    i = 0;
    while (s[i] && s[i] != c)  // iterate over string till delimiter is found
    {
        word[i] = s[i];  // copy character to word
        i++;
    }
    word[i] = '\0';  // terminate the word string
    return (word);  // return pointer to word
}

// This function splits the string s into words using delimiter c.
// It takes a string s and a delimiter c as inputs.
// It returns an array of char pointers pointing to the split words.
char    **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    char    **words;
    i = 0;
    j = 0;
    // allocate memory to hold the array of words
words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));

// check if memory allocation was successful
if (!words || !s)
    return (NULL);

// loop through the string s
while (s[i])
{
    // check if the current character is not the delimiter
    if (s[i] != c)
    {
        // call word_splitter function to extract the current word
        words[j] = word_splitter(&s[i], c);
        
        // move i to the next delimiter or end of string
        while (s[i] && s[i] != c)
            i++;
        
        // move j to the next index of the words array
        j++;
    }
    else
        i++; // move to next character if delimiter is found
}

// set the last element of the words array to NULL
words[j] = 0;

// return the array of words
return (words);
}


// int main(void)
// {
//     char    *str = "Words to be splitted";
//     char    sep = ' ';
//     char    **words = ft_split(str, sep);
//     int i = 0;
//     printf("Before: %s\nAfter: \n", str);
//     while (words[i])
//     {
//         printf("%s\n", words[i]);
//         free(words[i]);
//         i++;
//     }
//     free(words);
// }
