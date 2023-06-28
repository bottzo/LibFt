/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:37:50 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/28 12:58:03 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	unsigned int	idx;
	char			*ptr;

	idx = 0;
	while (s1[idx] != '\0')
		++idx;
	ptr = (char *)malloc(idx + 1);
	if (ptr == NULL)
		return ((void *)0);
	idx = 0;
	while (s1[idx] != '\0')
	{
		ptr[idx] = s1[idx];
		++idx;
	}
	ptr[idx] = '\0';
	return (ptr);
}
