/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:59:44 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/29 14:43:35 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize)
{
	unsigned int	length;
	unsigned int	srclength;
	unsigned int	dstlength;

	length = 0;
	dstlength = 0;
	while (*dst != '\0')
	{
		++length;
		++dst;
		++dstlength;
	}
	srclength = 0;
	while (*src != '\0')
	{
		if (dstsize != 0 && length++ < dstsize - 1)
			*dst++ = *src;
		++src;
		++srclength;
	}
	if (dstsize <= dstlength)
		return (srclength + dstsize);
	*dst = '\0';
	return (length);
}

/*#include <string.h>
#include <stdio.h>
int main()

	//char str[30] = "ola ola";
	//char str2[] = "deu deu";
	//strlcat(str, str2, 21);
	//printf("%s\n", str);
	char strr[30] = "ola ola";
	char strr2[] = "deu deu";
	ft_strlcat(strr, strr2, 21);
	printf("%s\n", strr);
	return 0;
}*/
