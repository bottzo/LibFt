/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:44:50 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:48:49 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	num_digits(int n)
{
	unsigned int	ret;

	if (n == 0)
		return (1);
	ret = 0;
	while (n != 0)
	{
		++ret;
		n /= 10;
	}
	return (ret);
}

static unsigned int	ten_exp(unsigned int n)
{
	unsigned int	ret;

	ret = 1;
	while (n--)
		ret *= 10;
	return (ret);
}

static void	num_to_str(char *out, int neg, long num, unsigned int num_digits)
{
	unsigned int	div;
	unsigned int	idx;

	idx = 0;
	if (neg)
		out[idx++] = '-';
	div = ten_exp(num_digits - 1);
	while (div)
	{
		out[idx++] = num / div + '0';
		num %= div;
		div /= 10;
	}
	out[idx] = '\0';
}

char	*ft_itoa(int n)
{
	unsigned int	digits;
	char			*ret;
	long			tmp;
	int				neg;

	neg = 0;
	tmp = n;
	if (n < 0)
	{
		neg = 1;
		tmp = -tmp;
	}
	digits = num_digits(n);
	ret = (char *)malloc(digits + neg + 1);
	if (!ret)
		return (NULL);
	num_to_str(ret, neg, tmp, digits);
	return (ret);
}

/*#include <stdio.h>
int main( void )
{
	printf("%s", ft_itoa(~(1 << 31)));
	return (0);
}*/
