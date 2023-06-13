/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:59:44 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/13 12:50:48 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize)
{
	unsigned int	size;

	while (*dst++ != '\0' && dstsize--)
		;
	while (*src != '\0' && dstsize-- > 0)
		*dst++ = *src++;
	*dst = '\0';
	return (dstsize);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
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
