/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:35:09 by iblanco-          #+#    #+#             */
/*   Updated: 2022/09/12 16:31:13 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ch)
{
	if ((97 <= ch) && (ch <= 122))
		return (ch - 32);
	else
		return (ch);
}

/*int main()
{
    int j = 0;
    char str[] = "GeEks@123\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(toupper(ch));
		printf("\n");
		putchar(toupper(ch));
		printf("\n");
        j++;
    }
 
    return 0;
}*/
