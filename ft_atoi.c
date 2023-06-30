/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:32:12 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/30 19:38:36 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c)
{
	return (c == ' ' || c == '\n'
		|| c == '\t' || c == '\f'
		|| c == '\r' || c == '\v');
}

static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *str)
{
	long	ret;
	int		neg;

	ret = 0;
	neg = 1;
	while (is_space(*str))
		++str;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		++str;
	}
	while (*str == '0')
		++str;
	while (is_digit(*str))
	{
		ret *= 10;
		ret += (*str - '0');
		++str;
	}
	return (ret * neg);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d", atoi("\t\n\v\f\r -456fgdfhsss"));
}*/
