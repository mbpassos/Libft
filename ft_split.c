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
#include <stdio.h>
#include <stdlib.h>
static int  ft_count_words(const char *s, char c)
{
    int i;
    int words;
    i = 0;
    words = 0;
    while (s[i])
    {
        if (s[i] != c)
        {
            words++;
            while (s[i] && s[i] != c)
                i++;
        }
        else
            i++;
    }
    return (words);
}
static char *word_splitter(const char *s, char c)
{
    char    *word;
    int     i;
    i = 0;
    while (s[i] && s[i] != c)
        i++;
    word = (char *) malloc(sizeof(char) * (i + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (s[i] && s[i] != c)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}
char    **ft_split(char const *s, char c)
{
    int     i;
    int     j;
    char    **words;
    i = 0;
    j = 0;
    words = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
    if (!words || !s)
        return (NULL);
    while (s[i])
    {
        if (s[i] != c)
        {
            words[j] = word_splitter(&s[i], c);
            while (s[i] && s[i] != c)
                i++;
            j++;
        }
        else
            i++;
    }
    words[j] = 0;
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
