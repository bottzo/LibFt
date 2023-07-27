/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 19:27:14 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/05/06 19:38:32 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned char	w;
	unsigned char	*bb;

	w = (unsigned char)c;
	bb = (unsigned char *)b;
	while (len--)
	{
		(*bb) = w;
		++bb;
	}
	return (b);
}
