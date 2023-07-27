/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 20:24:19 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/05/08 18:39:01 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned int	idx;
	int				inc;
	char			*ddst;
	const char		*ssrc;

	ddst = (char *)dst;
	ssrc = (const char *)src;
	if (ddst == 0 && ssrc == 0)
		return (dst);
	if (dst < src)
	{
		idx = 0;
		inc = 1;
	}
	else
	{
		idx = len - 1;
		inc = -1;
	}
	while (len--)
	{
		ddst[idx] = ssrc[idx];
		idx += inc;
	}
	return (dst);
}
