/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_222split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:35:42 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/23 19:58:45 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_count(char const *s, char c)
{
	int	i;
	int	j;
    int	len;
    int	count;
    
    i = 0;
    j = 0;
    count = 0;
    len = ft_strlen(s);
    while (i < len)
    {
        while (i < len &&  c == s[i])
          i++;
        j = i;
        while (i < len && c != s[i])
            i++;    
        if (i > j) 
            count++;
    }
    return (count);
}
char **ft_copy(char **strings, char *buffer, int len, int ik, int count, char c, char const *s)
{
	int i;
	int j;
	int istr;
	
	i = 0;
	j = 0;
	istr = 0;
    while (i < len)
    {
        while (i < len && c == s[i])
          i++;
        while (i < len && c != s[i])
        {
            buffer[j] = s[i];
            i++;
            j++;
        }
        if (j > 0 && istr < count)
        {
            buffer[j] = '\0';
            strings[istr] = malloc(sizeof(char) * (ft_strlen(&buffer[ik]) + 1));
            if (strings[istr] == NULL)
                return (0);
            ft_strlcpy(strings[istr], &buffer[ik], ft_strlen(&buffer[ik]) + 1);
            istr++;
            ik = j;
        }
    }
    strings[istr] = NULL;
    return (strings);
}
char **ft_split(char const *s, char c)
{
    // int    i;
    // int    j;
    int    len;
    // int istr;
    int ik;
	int count;
    char buffer[ft_strlen(s) + 3];
    char **strings;

    
    if (!s)
        return (NULL);
    strings = (char **)malloc((sizeof(char *) * (ft_count(s, c) + 1)));
    if (strings == NULL)
        return (0);
    // i = 0;
    // j = 0;
	count = (ft_count(s, c));
    // istr = 0;
    ik = 0;
    len = ft_strlen(s);
	return (ft_copy(strings, buffer, len, ik, count, c, s));
    // while (i < len)
    // {
    //     while (i < len && c == s[i])
    //       i++;
    //     while (i < len && c != s[i])
    //     {
    //         buffer[j] = s[i];
    //         i++;
    //         j++;
    //     }
    //     if (j > 0 && istr < (ft_count(s, c)))
    //     {
    //         buffer[j] = '\0';
    //         strings[istr] = malloc(sizeof(char) * (ft_strlen(&buffer[ik]) + 1));
    //         if (strings[istr] == NULL)
    //             return (0);
    //         ft_strlcpy(strings[istr], &buffer[ik], ft_strlen(&buffer[ik]) + 1);
    //         istr++;
    //         ik = j;
    //     }
    // }
    // strings[istr] = NULL;
    // return (strings);
}
