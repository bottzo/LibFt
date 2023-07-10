/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:49:11 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:49:28 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
int main()
{
	int fd = open("./hi", O_CREAT | O_RDWR);
	ft_putchar_fd('b', fd);
	ft_putchar_fd('\n', fd);
	close(fd);
	return (0);
}*/
