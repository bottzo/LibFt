/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:52:49 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:53:15 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*#include <fcntl.h>
int main()
{
	int fd = open("./hi", O_CREAT | O_RDWR);
	ft_putstr_fd("hola que tal\n", fd);
	close(fd);
	return (0);
}*/
