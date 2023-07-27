/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:49:54 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:49:56 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	endl;

	endl = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &endl, 1);
}

/*#include <fcntl.h>
int main()
{
	int fd = open("./hi", O_CREAT | O_RDWR);
	ft_putendl_fd("hola que tal", fd);
	close(fd);
	return (0);
}*/
