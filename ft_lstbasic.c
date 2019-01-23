/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbasic.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccharrie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 10:30:44 by ccharrie          #+#    #+#             */
/*   Updated: 2017/11/22 11:42:10 by aparabos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_lstaddend(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		while ((*lst)->next)
			*lst = (*lst)->next;
		(*lst)->next = new;
		*lst = tmp;
	}
}

t_list	*ft_lstnew(t_list *lst)
{
	if (!(lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	lst->next = NULL;
	return (lst);
}

void	ft_checkend(t_list *lst, char **res)
{
	if (lst->next == NULL)
	{
		ft_showmap(res);
		exit(EXIT_SUCCESS);
	}
}
