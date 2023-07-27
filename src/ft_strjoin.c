/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 12:40:19 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/02 13:10:49 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ret;
	unsigned int	tmpidx;
	unsigned int	idx;

	ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ret)
		return (NULL);
	tmpidx = 0;
	idx = 0;
	while (s1[tmpidx] != '\0')
		ret[idx++] = s1[tmpidx++];
	tmpidx = 0;
	while (s2[tmpidx] != '\0')
		ret[idx++] = s2[tmpidx++];
	ret[idx] = '\0';
	return (ret);
}

/*#include <stdio.h>
int main()
{
	printf("%s", ft_strjoin("", ""));	
	return 0;
}*/
