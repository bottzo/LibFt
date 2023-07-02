/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 19:44:13 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/02 19:36:56 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, unsigned long len)
{
	char			*ret;
	char			*tmp;
	unsigned long	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		len = 0;
	else if (slen - start < len)
		len = slen - start;
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	s += start;
	tmp = ret;
	while (len--)
		*tmp++ = *s++;
	*tmp = '\0';
	return (ret);
}

/*#include <stdio.h>
int main()
{
	printf("%s", ft_substr("hola", 2, 30));
	return (0);
}*/
