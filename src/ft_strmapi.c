/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:54:34 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:55:10 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	idx;

	ret = (char *)malloc(ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	idx = 0;
	while (s[idx] != '\0')
	{
		ret[idx] = f(idx, s[idx]);
		++idx;
	}
	ret[idx] = '\0';
	return (ret);
}

/*#include <stdio.h>
char up(unsigned int idx, char c)
{
	if (idx % 2)
		return (c - ('a' - 'A'));
	else
		return c;
}

int main()
{
	printf("%s\n", ft_strmapi("hola que tal", up));
	return 0;
}*/
