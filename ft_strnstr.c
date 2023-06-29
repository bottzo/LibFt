/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:43:16 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/29 13:26:16 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *b, const char *l, unsigned long len)
{
	const char		*str_b;
	const char		*str_l;
	unsigned long	tmp;

	if (*l == '\0')
		return ((char *)b);
	if (len == 0)
		return ((void *)0);
	while (*b != '\0' && len)
	{
		tmp = len--;
		str_b = b;
		str_l = l;
		while (*str_b == *str_l && *str_b != '\0' && *str_l != '\0' && tmp--)
		{
			++str_b;
			++str_l;
		}
		if (*str_l == '\0')
			return ((char *)b);
		++b;
	}
	return ((void *)0);
}

/*#include <string.h>
#include <stdio.h>
int main()
{
    char* str1 = "abcdf";
    char *str2 = "abc";
    printf("%s", strnstr(str1,str2,3));
    return (0);
}*/
