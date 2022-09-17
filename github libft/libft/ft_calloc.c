/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:22:49 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/16 17:54:19 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void		*mem;
	size_t		i;

	i = 0;
	mem = malloc(nitems * size);
	if (mem == NULL)
		return (0);
	ft_bzero(mem, nitems * size);
	return (mem);
}
