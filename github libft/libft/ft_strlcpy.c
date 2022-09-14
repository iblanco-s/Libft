/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:24:14 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/12 18:55:48 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	c;
	size_t	k;

	c = 0;
	k = 0;
	while (src[c] != '\0')
		c++;
	if (len > 0)
	{
		while (src[k] != '\0')
		{
			dest[k] = src[k];
			k++;
			if (k == len)
			{
				k--;
				break ;
			}
		}
		dest[k] = '\0';
	}
	return (c);
}

/*int main (void)
{
	char * src = "33 2effes";
	char dest[]= "holaadios";
	int len = 5;

	printf ("%d\n",ft_strlcpy(dest, src, len));
	printf ("%lu",strlcpy(dest, src, len));
} */
