/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:35:42 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/25 17:11:59 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	**ft_copy(char **strings, char *tmp, char c, char const *s)
{
	int	i[4];

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	i[3] = 0;
	while (i[0] < ft_strlen(s))
	{
		while (i[0] < ft_strlen(s) && c == s[i[0]])
			i[0]++;
		while (i[0] < ft_strlen(s) && c != s[i[0]])
			tmp[i[1]++] = s[i[0]++];
		if (i[1] > 0 && i[2] < (ft_count(s, c)))
		{
			tmp[i[1]] = '\0';
			strings[i[2]] = malloc(sizeof(char) * (ft_strlen(&tmp[i[3]]) + 1));
			if (strings[i[2]] == NULL)
				return (0);
			ft_strlcpy(strings[i[2]], &tmp[i[3]], ft_strlen(&tmp[i[3]]) + 1);
			i[2]++;
			i[3] = i[1];
		}
	}
	strings[i[2]] = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	*tmp;
	char	**strings;

	tmp = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s)
		return (NULL);
	strings = (char **)malloc((sizeof(char *) * (ft_count(s, c) + 1)));
	if (strings == NULL)
		return (0);
	ft_copy(strings, tmp, c, s);
	free(tmp);
	return (strings);
}
