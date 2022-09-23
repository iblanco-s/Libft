/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:35:42 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/23 20:15:51 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

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
		while (i < len && c == s[i])
			i++;
		j = i;
		while (i < len && c != s[i])
			i++;
		if (i > j)
			count++;
	}
	return (count);
}

char	**ft_copy(char **strings, char *buffer, char c, char const *s)
{
	int	i[4];
	int	len;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	i[3] = 0;
	len = ft_strlen(s);
	while (i[0] < len)
	{
		while (i[0] < len && c == s[i[0]])
			i[0]++;
		while (i[0] < len && c != s[i[0]])
			buffer[i[1]++] = s[i[0]++];
		if (i[1] > 0 && i[2] < (ft_count(s, c)))
		{
			buffer[i[1]] = '\0';
			strings[i[2]] = malloc(1 * (ft_strlen(&buffer[i[3]]) + 1));
			if (strings[i[2]] == NULL)
				return (0);
			ft_strcpy(strings[i[2]], &buffer[i[3]]);
			i[2]++;
			i[3] = i[1];
		}
	}
	strings[i[2]] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char buffer[ft_strlen(s) + 3];
	char	**strings;

	// buffer = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s)
		return (NULL);
	strings = (char **)malloc((sizeof(char *) * (ft_count(s, c) + 1)));
	if (strings == NULL)
		return (0);
	return (ft_copy(strings, buffer, c, s));
}
