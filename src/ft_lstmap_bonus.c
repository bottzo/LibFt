/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:12:38 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/17 19:59:13 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	reorder_ptrs(t_list **ret, t_list **tmp, t_list **it)
{
	if (*ret == NULL)
	{
		*it = *tmp;
		*ret = *it;
	}
	else
	{
		(*it)->next = *tmp;
		(*it) = (*it)->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*ret;
	t_list			*tmp;
	t_list			*it;
	void			*cnt;

	ret = NULL;
	while (lst != NULL)
	{
		cnt = f(lst->content);
		tmp = ft_lstnew(cnt);
		if (tmp == NULL)
		{
			del(cnt);
			ft_lstclear(&ret, del);
			return (NULL);
		}
		reorder_ptrs(&ret, &tmp, &it);
		lst = lst->next;
	}
	return (ret);
}

/*#include <stdio.h>
void delete(void*ptr)
{
	free(ptr);
}
void* dub(void *ptr)
{
	int *ptr2;

	ptr2 = (int*)malloc(sizeof(int));
	*ptr2 = (*(int *)ptr) * 2;
	return ((void *)ptr2);
}
int *newint(int n)
{
	int *ret = (int *)malloc(sizeof(int));
	*ret = n;
	return (ret);
}
void print(void* ptr)
{
	printf("%d\n", *(int*)ptr);
}
int main()
{
	t_list *lst = NULL;
	int n = 0;
	while (n < 10)
		ft_lstadd_back(&lst, ft_lstnew(newint(n++)));
	t_list	*lst2 = ft_lstmap(lst, dub, delete);
	ft_lstiter(lst2, print);
	ft_lstclear(&lst, delete);
	ft_lstclear(&lst2, delete);
}*/
