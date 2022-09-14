/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maareval <maareval@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 09:19:35 by maareval          #+#    #+#             */
/*   Updated: 2022/05/15 09:23:46 by maareval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*c;
	t_list	*n;
	
	c = *lst;
	while (c)
	{
		n = c->next;
		ft_lstdelone(c, del);
		c = n;
	}
	*lst = NULL;
}
