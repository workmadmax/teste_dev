/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdouglas <mdouglas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 20:44:58 by mdouglas          #+#    #+#             */
/*   Updated: 2025/01/13 20:53:48 by mdouglas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>


int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// function to reverse the string

void    ft_reverse (char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;
    char temp;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main( int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./reverse < string >\n");
        return 1;
    }
    ft_reverse(argv[1]);
    printf("%s\n", argv[1]);
    return 0;
}