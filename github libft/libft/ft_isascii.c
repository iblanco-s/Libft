/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:15:31 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/12 17:31:32 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if ((0 <= a) && (a <= 127))
		return (1);
	else
		return (0);
}

/*int	main (void)
{
	char a;

	a = '2';
	printf ("%i\n",ft_isascii(a));
	printf ("%i",isascii(a));
	
}*/