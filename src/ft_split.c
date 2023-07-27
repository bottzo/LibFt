/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbach-ba <jbach-ba@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:48:14 by jbach-ba          #+#    #+#             */
/*   Updated: 2023/07/13 11:56:51 by jbach-ba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	freeall(char **ret)
{
	unsigned int	idx;

	idx = 0;
	while (ret[idx] != NULL)
		free(ret[idx++]);
	free(ret);
}

static unsigned int	count_words(const char *s, char c)
{
	unsigned int	ret;

	ret = 0;
	while (*s != '\0')
	{
		while (*s == c)
			++s;
		if (*s != '\0')
			++ret;
		while (*s != c && *s != '\0')
			++s;
	}
	return (ret);
}

static int	split_body(char **ret, const char *s, char c)
{
	unsigned int	s_idx;
	unsigned int	w_ini;
	unsigned int	ret_idx;

	s_idx = 0;
	ret_idx = 0;
	while (s[s_idx] != '\0')
	{
		while (s[s_idx] == c)
			++s_idx;
		if (s[s_idx] != '\0')
		{
			w_ini = s_idx;
			while (s[s_idx] != c && s[s_idx] != '\0')
				++s_idx;
			ret[ret_idx] = ft_substr(s, w_ini, s_idx - w_ini);
			if (ret[ret_idx++] == NULL)
			{
				freeall(ret);
				return (0);
			}
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char			**ret;
	unsigned int	words;

	words = count_words(s, c);
	ret = (char **)malloc((words + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	ret[words] = NULL;
	if (!split_body(ret, s, c))
		return (NULL);
	return (ret);
}

/*#include <stdio.h>
int main()
{
    char **splited = ft_split(" hola  que    tal ! bien", ' ');
    while (*splited != NULL)
        printf("%s\n", *splited++);
    return 0;
}*/
