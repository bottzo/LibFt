/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:50:22 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:52:37 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

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

static char	*fill_itoa(int n, char *ret)
{
	unsigned int	digits;
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
	num_to_str(ret, neg, tmp, digits);
	return (ret);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	put[12];

	fill_itoa(n, put);
	write(fd, put, ft_strlen(put));
}

/*#include <fcntl.h>
int main()
{
	int fd = open("./hi", O_CREAT | O_RDWR);
	ft_putnbr_fd((1 << 31), fd);
	close(fd);
	return (0);
}*/
