/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:30:10 by inigo             #+#    #+#             */
/*   Updated: 2022/09/18 11:32:36 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2);
{
	char	*ret;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
		i++;
	ret = ((char *) malloc((i + 1) * sizeof(char)));
	if (ret == NULL)
	{
		return (0);
	}
	while (j < i)
	{
		ret[j] = s[j];
		j++;
	}
	ret[j] = '\0';
	return (ret);
}