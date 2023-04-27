/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 18:53:27 by mbrito-p          #+#    #+#             */
/*   Updated: 2023/04/27 23:59:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a string
// representing the integer received as an argument.
// Negative numbers must be handled.
#include "libft.h"

static char    *ft_char(char *s, unsigned int number, long int len)
{
    while (number > 0)
    {
        s[len--] = 48 + (number % 10);
        number = number / 10;
    }
    return (s);
}

static long int    ft_len(int n)
{
    int    len;

    len = 0;
    if (n <= 0)
        len = 1;
    while (n != 0)
    {
        len++;
        n = n / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    char                *s;
    long int            len;
    unsigned int        number;
    int                    sign;

    sign = 1;
    len = ft_len(n);
    s = (char *)malloc(sizeof(char) * (len + 1));
    if (!(s))
        return (0);
    s[len--] = '\0';
    if (n == 0)
        s[0] = '0';
    if (n < 0)
    {
        sign *= -1;
        number = n * -1;
        s[0] = '-';
    }
    else
        number = n;
    s = ft_char(s, number, len);
    return (s);
}

// int main(void)
// {
//   int number;
//   char  s;
//   s = ft_itoa(-119);
//   printf("itoa:%s",s);
//   return (0);
// }