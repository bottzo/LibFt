/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:31:32 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/06/28 12:36:44 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned long nmemb, unsigned long size)
{
	unsigned long	array_size;
	unsigned int	i;
	char			*ptr;

	array_size = size * nmemb;
	if (!array_size)
		return ((void *)0);
	ptr = (char *)malloc(array_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < array_size)
		ptr[i++] = 0;
	return (ptr);
}

/*#include <stdio.h>
int main()
{
    int *a = (int*)calloc(10,sizeof(int));
    int *b = (int*)ft_calloc(10,sizeof(int));
    for(int i = 0; i < 10; ++i)
        printf("%d, ", a[i]);
    printf("\n");
    for(int i = 0; i < 10; ++i)
        printf("%d, ", b[i]);
    free(a);
    free(b);
    return (0);
}*/
