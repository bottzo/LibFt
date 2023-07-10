/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 19:49:27 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/02 20:02:42 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	freeall(char** ret)
{
	while (*ret != NULL)
		free(*ret++);
	free(ret);
}

static int	addnew(char	***in, char *new)
{
	char			**curr;
	long			idx;
	char			**ret;

	if (new == NULL)
		return (0);
	curr = *in;
	idx = 0;
	while (curr[idx] != NULL)
		++idx;
	ret = (char **)malloc(sizeof(char *) * (++idx + 1));
	if (!ret)
	{
		freeall(*in);
		return (0);
	}
	ret[idx--] = NULL;
	ret[idx--] = new;
	while (idx >= 0)
	{
		ret[idx] = curr[idx];
		--idx;
	}
	free(curr);
	*in = ret;
	return (1);
}

char **ft_split(char const *s, char c)
{
	unsigned int	idx;
	unsigned int	ini;
	char			**ret;

	idx = 0;
	ini = idx;
	ret = (char **)malloc(sizeof(char *));
	if (!ret)
		return (NULL);
	*ret = NULL;
	while (s[idx] != '\0')
	{
		while (s[idx] == c)
			++idx;
		if (s[idx] != '\0')
		{
			ini = idx;
			while (s[idx] != c)
				++idx;
			if (!addnew(&ret, ft_substr(s, ini, idx - ini)))
				return (NULL);
		}
	}
	return (ret);
}

/*#include <stdio.h>
int main()
{
	char **ret = ft_split(" Hola   que tal  ", ' ');
	while(*ret != NULL)
		printf("%s\n", *ret++);
	return (0);
}*/