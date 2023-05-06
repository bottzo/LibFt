/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:47:45 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/05/06 20:22:54 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	char		*ddst;
	const char	*ssrc;

	ddst = (char *)dst;
	ssrc = (const char *)src;
	if (ddst == 0 && ssrc == 0)
		return (dst);
	while (n--)
	{
		*ddst = *ssrc;
		++ddst;
		++ssrc;
	}
	return (dst);
}
