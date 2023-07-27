/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:43:37 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/13 15:09:48 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
}
