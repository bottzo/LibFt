/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 13:11:17 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/28 14:00:14 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned long n)
{
	unsigned char	*ptr;
	unsigned char	u_c;

	ptr = (unsigned char *)s;
	u_c = c;
	while (n--)
		if (*ptr++ == u_c)
			return (--ptr);
	return ((void *)0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char *ret = " 4  %    4   \271    ~Z  8       I    ub     #&   M&";
    printf("%s", memchr(ret, '\271', 35));
    return (0);
}*/
