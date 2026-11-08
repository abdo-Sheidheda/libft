/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abed-dyb <abed-dyb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 17:08:13 by abed-dyb          #+#    #+#             */
/*   Updated: 2026/10/24 11:56:16 by abed-dyb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	w_count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	w_len(char const *s, char c, int start)
{
	int	len;

	len = 0;
	while (s[start] && s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}

static char	*fill_in_res(char const *s, char c, char *to_fill, int start)
{
	int	i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		to_fill[i] = s[start];
		start++;
		i++;
	}
	to_fill[i] = '\0';
	return (to_fill);
}

static void	*free_buffer(char **buff, int i)
{
	while (i > 0)
		free(buff[--i]);
	free(buff);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**res;

	if (!s)
		return (NULL);
	res = malloc((w_count(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		res[j] = malloc((w_len(s, c, i) + 1) * sizeof(char));
		if (!res[j])
			return (free_buffer(res, j));
		fill_in_res(s, c, res[j++], i);
		i += w_len(s, c, i);
	}
	res[j] = NULL;
	return (res);
}
