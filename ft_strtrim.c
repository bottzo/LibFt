/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 13:09:09 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/02 14:09:41 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	charinset(char c, char const *set)
{
	while (*set != '\0')
		if (c == *set++)
			return (1);
	return (0);
}

static void	trim(char *s, char *set, unsigned long slen, unsigned int out[2])
{
	long	idx;

	idx = 0;
	out[0] = 0;
	out[1] = 0;
	while (s[idx] != '\0')
	{
		if (!charinset(s[idx++], set))
			break ;
		++out[0];
	}
	idx = slen - 1;
	while (idx > 0)
	{
		if (!charinset(s[idx--], set))
			break ;
		++out[1];
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	idx;
	unsigned int	trims[2];
	unsigned long	s1len;
	char			*ret;

	idx = 0;
	s1len = ft_strlen(s1);
	trim((char *)s1, (char *)set, s1len, trims);
	ret = (char *)malloc(s1len - trims[0] - trims[1] + 1);
	if (!ret)
		return (NULL);
	idx = trims[0];
	while (idx < (s1len - trims[1]))
	{
		ret[idx - trims[0]] = s1[idx];
		++idx;
	}
	ret[idx - trims[0]] = '\0';
	return (ret);
}

/*#include <stdio.h>
int main()
{
	printf("%s", ft_strtrim("wefsef", " sdgsg"));	
	return 0;
}*/
