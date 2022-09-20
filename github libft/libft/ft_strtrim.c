/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:14:20 by inigo             #+#    #+#             */
/*   Updated: 2022/09/20 20:00:36 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	checkchar(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*ret;

	i = 0;
	j = 0;
	if (s1 == NULL)
		return (0);
	while (s1[i] != '\0' && checkchar(s1[i], set) == 1)
		i++;
	k = ft_strlen(s1);
	while (checkchar(s1[k - 1], set) == 1 && k - 1 >= i)
		k--;
	ret = (malloc(k - i + 1));
	if (ret == NULL)
		return (0);
	while (i < k)
		ret[j++] = s1[i++];
	ret[j] = '\0';
	return (ret);
}
