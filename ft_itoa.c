/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abed-dyb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:51:58 by abed-dyb          #+#    #+#             */
/*   Updated: 2026/10/28 19:34:30 by abed-dyb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(long num)
{
	int	count;

	count = 0;
	if (num < 0)
	{
		count++;
		num = -num;
	}
	if (num == 0)
		return (1);
	while (num > 0)
	{
		count++;
		num = num / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nb;

	nb = n;
	len = num_len(n);
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (n < 0)
		nb = -nb;
	res[len] = '\0';
	while (len > 0)
	{
		res[len - 1] = nb % 10 + '0';
		len--;
		nb = nb / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
