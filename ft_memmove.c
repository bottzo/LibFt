/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:24:19 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/05/06 20:30:43 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	char		*ddst;
	const char	*ssrc;

	ddst = (char *)dst;
	ssrc = (const char *)src;
	if (ddst == 0 && ssrc == 0)
		return (dst);
	while (len--)
	{
		*ddst = *ssrc;
		++ddst;
		++ssrc;
	}
	return (dst);
}
