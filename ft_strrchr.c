/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abed-dyb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:46:45 by abed-dyb          #+#    #+#             */
/*   Updated: 2026/10/28 10:59:41 by abed-dyb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	temp;

	if (!str)
		return (NULL);
	i = 0;
	temp = -1;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			temp = i;
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&str[i]);
	if (temp == -1)
		return (NULL);
	return ((char *)&str[temp]);
}
