/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inigo <inigo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:54:54 by iblanco-          #+#    #+#             */
/*   Updated: 2022/10/02 20:22:55 by inigo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*retlist;
	t_list	*temp;	

	if (!lst)
		return (NULL);
	retlist = ft_lstnew(f(lst -> content));
	if (!retlist)
		ft_lstclear(&(retlist), del);
	retlist -> next = NULL;
	temp = retlist;
	lst = lst -> next;
	while (lst)
	{
		temp -> next = ft_lstnew(f(lst->content));
		if (!(temp->next))
			ft_lstclear(&(retlist), del);
		temp = temp -> next;
		temp -> next = NULL;
		lst = lst -> next;
	}
	return (retlist);
}

//https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Atypedef%20struct%20s_list%0A%7B%0A%20%20%20%20void%20%20%20%20%20%20%20%20%20%20%20%20*content%3B%0A%20%20%20%20struct%20s_list%20%20%20%20*next%3B%0A%7D%20%20%20%20t_list%3B%0A%20%20%0Avoid%20%20%20%20ft_lstclear%28t_list%20**lst%29%0A%7B%0A%20%20%20%20t_list%20%20%20%20*temp%3B%0A%0A%20%20%20%20while%20%28*lst%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20temp%20%3D%20%28*lst%29-%3E%20next%3B%0A%20%20%20%20%20%20%20%20free%28*lst%29%3B%0A%20%20%20%20%20%20%20%20*lst%20%3D%20temp%3B%0A%20%20%20%20%7D%0A%7D%0At_list%20%20%20%20*ft_lstmap%28t_list%20*lst%29%0A%7B%0A%20%20%20%20t_list%20%20%20%20*lst%3B%0A%20%20%20%20t_list%20%20%20%20*retlist%3B%0A%20%20%20%20t_list%20%20%20%20*temp%3B%0A%0A%20%20%20%20lst%20%3D%20lst%3B%0A%20%20%20%20retlist%20%3D%20NULL%3B%0A%20%20%20//%20tail%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20temp%20%3D%20NULL%3B%0A%20%20%20%20if%20%28lst%20!%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20retlist%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20%20%20//retlist%20-%3E%20content%20%3D%20ft_lstiter%28lst,%20%28*f%29%28void*%29%29%3B%0A%20%20%20%20%20%20retlist%20-%3E%20next%20%3D%20NULL%3B%0A%20%20%20%20%20%20temp%20%3D%20retlist%3B%0A%20%20%20%20%7D%0A%20%20%20%20while%20%28lst%20!%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20/*%20%20if%20%28retlist%20%3D%3D%20NULL%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20retlist%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20//retlist%20-%3E%20content%20%3D%20ft_lstiter%28lst,%20%28*f%29%28void*%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20retlist%20-%3E%20next%20%3D%20NULL%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20temp%20%3D%20retlist%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20else%0A%20%20%20%20%20%20%20%20%7B*/%0A%20%20%20%20%20%20%20%20%20%20%20%20temp-%3Enext%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20temp%20%3D%20temp-%3Enext%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20//retlist%20-%3E%20content%20%3D%20ft_lstiter%28lst,%20%28*f%29%28void*%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20temp-%3Enext%20%3D%20NULL%3B%0A%20%20%20%20%20%20%20%20//%7D%0A%20%20%20%20%20%20%20%20lst%20%3D%20lst-%3Enext%3B%0A%20%20%20%20%7D%0A%20%20%20%20ft_lstclear%28%26%28lst%29%29%3B%0A%7D%0A%0A%0A%0Aint%20main%28%29%0A%7B%0A%20%20%20%20t_list%20*head%20%3D%20NULL%3B%0A%20%20%20%20t_list%20*second%20%3D%20NULL%3B%0A%20%20%20%20t_list%20*third%20%3D%20NULL%3B%0A%20%20%0A%20%20%20%20//%20allocate%203%20nodes%20in%20the%20heap%0A%20%20%20%20head%20%3D%20%28t_list*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20second%20%3D%20%28t_list*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20third%20%3D%20%28t_list*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%0A%20%20//%20assign%20data%20in%20first%20node%0A%20%20%20%20head-%3Enext%20%3D%20second%3B%20//%20Link%20first%20node%20with%20second%0A%20%20%0A%20//%20assign%20data%20to%20second%20node%0A%20%20%20%20second-%3Enext%20%3D%20third%3B%0A%20%20%0A//%20assign%20data%20to%20third%20node%0A%20%20%20%20third-%3Enext%20%3D%20NULL%3B%0A%20%20%20%20ft_lstmap%28head%29%3B%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&curInstr=54&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false