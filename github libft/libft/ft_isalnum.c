/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:18:56 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/12 16:31:41 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char a)
{
	if ('0' <= a && a <= '9')
		return (1);
	else if (('A' <= a && a <= 'Z') || ('a' <= a && a <= 'z'))
		return (1);
	else
		return (0);
}

/*int main (void)
{
	char a;

	a = '?';
	printf ("%i\n",ft_isalnum(a));
	printf ("%i",isalnum(a));
}*/