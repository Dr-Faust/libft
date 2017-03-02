/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opodolia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 19:37:54 by opodolia          #+#    #+#             */
/*   Updated: 2016/12/10 17:54:33 by opodolia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(long nb)
{
	size_t	size;

	size = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		size++;
	}
	while (nb > 0)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char			*ft_itoa(int n)
{
	long	nb;
	char	*str;
	size_t	size;

	nb = n;
	size = ft_size(nb);
	str = ft_strnew(size);
	if (str == 0)
		return (0);
	if (n == 0)
		str = ft_strdup("0");
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0 && str)
	{
		str[size - 1] = '0' + (nb % 10);
		size--;
		nb /= 10;
	}
	return (str);
}
