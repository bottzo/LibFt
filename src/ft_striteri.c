/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 18:53:30 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/10 18:53:57 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		f(idx, &s[idx]);
		++idx;
	}
}

/*#include <stdio.h>
void up(unsigned int idx, char *c)
{
	if (idx % 2)
		*c = *c - ('a' - 'A');
}

int main()
{
	char a[] = "hola que tal";
	ft_striteri(a, up);
	printf("%s\n", a);
	return 0;
}*/
