/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:33:12 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/13 13:52:17 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	char	var;

	var = (char)c;
	ret = (void *)0;
	while (*s != '\0')
	{
		if (*s == var)
			ret = (char *)s;
		++s;
	}
	if (*s == var)
		ret = (char *)s;
	return (ret);
}
