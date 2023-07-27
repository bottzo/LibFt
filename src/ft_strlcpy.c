/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 18:42:06 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/05/08 19:59:03 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	idx;
	unsigned long	tmp;

	idx = 0;
	tmp = dstsize;
	while (tmp > 1 && src[idx] != '\0')
	{
		dst[idx] = src[idx];
		++idx;
		--tmp;
	}
	if (dstsize != 0)
		dst[idx] = '\0';
	while (src[idx] != '\0')
		++idx;
	return (idx);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
	char str[] = "ola ola";
	char str2[] = "deu deu";
	strlcpy(str, str2, 10000000);
	printf("%s\n", str);
	char strr[] = "ola ola";
	char strr2[] = "deu deu";
	ft_strlcpy(strr, strr2, 10000000);
	printf("%s\n", strr);
	return 0;
}*/
