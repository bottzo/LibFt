/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:07:16 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/28 14:21:09 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned long n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
		if (*ptr1++ != *ptr2++)
			return (*--ptr1 - *--ptr2);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
    char* str1 = "Hil there";
    char *str2 = "Hi there";
    printf("%d", memcmp(str1,str2,6));
    return (0);
}*/
