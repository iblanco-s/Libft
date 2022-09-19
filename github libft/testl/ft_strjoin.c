/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:30:10 by inigo             #+#    #+#             */
/*   Updated: 2022/09/18 12:38:18 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*ret;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	k = i + j;
	ret = (malloc((i + j + 1) * sizeof(char)));
	if (ret == NULL)
		return (0);
	
	ret[k] = '\0';
	return (ret);
}
