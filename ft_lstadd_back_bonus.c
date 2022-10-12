/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 19:34:43 by frmurcia          #+#    #+#             */
/*   Updated: 2022/10/07 19:36:41 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!*lst)
		lst[0] = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
/*
int	main(void)
{
	t_list	*ptr;
	t_list	*ptr2;
	char	str[43] = "HOLA";
	
	ptr = ft_lstnew(str);
	ptr->next = NULL;
	ptr2 = ft_lstnew(str);
	ptr->next = ptr2;
`:w
}
*/
