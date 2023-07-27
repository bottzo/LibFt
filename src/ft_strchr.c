/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:15:32 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/13 13:44:45 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	var;

	var = (char)c;
	while (*s != '\0')
	{
		if (*s == var)
			return ((char *)s);
		++s;
	}
	if (*s == var)
		return ((char *)s);
	return ((void *)0);
}
