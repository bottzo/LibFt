/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:50:25 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/13 13:58:17 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	ret;

	if (lst == NULL)
		return (0);
	ret = 1;
	while (lst->next != NULL)
	{
		++ret;
		lst = lst->next;
	}
	return (ret);
}
