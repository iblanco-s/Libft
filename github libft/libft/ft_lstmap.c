/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iblanco- <iblanco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:54:54 by iblanco-          #+#    #+#             */
/*   Updated: 2022/10/01 20:06:47 by iblanco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newlist;
	t_list	*last;	
	t_list	*d;

	current = lst;
	newlist = NULL;
	d = NULL;
	if (current != NULL)
	{
		newlist = (t_list *)malloc(sizeof(t_list));
		newlist -> content = f(current -> content);
		newlist -> next = NULL;
		last = newlist;
	}
	while (current != NULL && newlist != NULL)
	{
		last->next = (t_list *)malloc(sizeof(t_list));
		last = last->next;
		last -> content = f(current -> content);
		last->next = NULL;
		current = current -> next;
	}
	ft_lstclear(&(d), del);
	return (newlist);
}

//https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Atypedef%20struct%20s_list%0A%7B%0A%20%20%20%20void%20%20%20%20%20%20%20%20%20%20%20%20*content%3B%0A%20%20%20%20struct%20s_list%20%20%20%20*next%3B%0A%7D%20%20%20%20t_list%3B%0A%20%20%0Avoid%20%20%20%20ft_lstclear%28t_list%20**lst%29%0A%7B%0A%20%20%20%20t_list%20%20%20%20*temp%3B%0A%0A%20%20%20%20while%20%28*lst%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20temp%20%3D%20%28*lst%29-%3E%20next%3B%0A%20%20%20%20%20%20%20%20free%28*lst%29%3B%0A%20%20%20%20%20%20%20%20*lst%20%3D%20temp%3B%0A%20%20%20%20%7D%0A%7D%0At_list%20%20%20%20*ft_lstmap%28t_list%20*lst%29%0A%7B%0A%20%20%20%20t_list%20%20%20%20*current%3B%0A%20%20%20%20t_list%20%20%20%20*newlist%3B%0A%20%20%20%20t_list%20%20%20%20*last%3B%0A%0A%20%20%20%20current%20%3D%20lst%3B%0A%20%20%20%20newlist%20%3D%20NULL%3B%0A%20%20%20//%20tail%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20last%20%3D%20NULL%3B%0A%20%20%20%20if%20%28current%20!%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20newlist%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20%20%20//newlist%20-%3E%20content%20%3D%20ft_lstiter%28current,%20%28*f%29%28void*%29%29%3B%0A%20%20%20%20%20%20newlist%20-%3E%20next%20%3D%20NULL%3B%0A%20%20%20%20%20%20last%20%3D%20newlist%3B%0A%20%20%20%20%7D%0A%20%20%20%20while%20%28current%20!%3D%20NULL%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20/*%20%20if%20%28newlist%20%3D%3D%20NULL%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20newlist%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20//newlist%20-%3E%20content%20%3D%20ft_lstiter%28current,%20%28*f%29%28void*%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20newlist%20-%3E%20next%20%3D%20NULL%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20last%20%3D%20newlist%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%20%20%20%20else%0A%20%20%20%20%20%20%20%20%7B*/%0A%20%20%20%20%20%20%20%20%20%20%20%20last-%3Enext%20%3D%20%28t_list%20*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20last%20%3D%20last-%3Enext%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20//newlist%20-%3E%20content%20%3D%20ft_lstiter%28current,%20%28*f%29%28void*%29%29%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20last-%3Enext%20%3D%20NULL%3B%0A%20%20%20%20%20%20%20%20//%7D%0A%20%20%20%20%20%20%20%20current%20%3D%20current-%3Enext%3B%0A%20%20%20%20%7D%0A%20%20%20%20ft_lstclear%28%26%28lst%29%29%3B%0A%7D%0A%0A%0A%0Aint%20main%28%29%0A%7B%0A%20%20%20%20t_list%20*head%20%3D%20NULL%3B%0A%20%20%20%20t_list%20*second%20%3D%20NULL%3B%0A%20%20%20%20t_list%20*third%20%3D%20NULL%3B%0A%20%20%0A%20%20%20%20//%20allocate%203%20nodes%20in%20the%20heap%0A%20%20%20%20head%20%3D%20%28t_list*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20second%20%3D%20%28t_list*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%20%20third%20%3D%20%28t_list*%29malloc%28sizeof%28t_list%29%29%3B%0A%20%20%0A%20%20//%20assign%20data%20in%20first%20node%0A%20%20%20%20head-%3Enext%20%3D%20second%3B%20//%20Link%20first%20node%20with%20second%0A%20%20%0A%20//%20assign%20data%20to%20second%20node%0A%20%20%20%20second-%3Enext%20%3D%20third%3B%0A%20%20%0A//%20assign%20data%20to%20third%20node%0A%20%20%20%20third-%3Enext%20%3D%20NULL%3B%0A%20%20%20%20ft_lstmap%28head%29%3B%0A%20%20%20%20return%200%3B%0A%7D&cumulative=false&curInstr=54&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false
//https://www.techiedelight.com/clone-given-linked-list/