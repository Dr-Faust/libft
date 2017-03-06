/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 10:01:33 by exam              #+#    #+#             */
/*   Updated: 2017/02/02 19:23:40 by opodolia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int		ft_size(long val, int base)
{
	int		size;

	size = 1;
	if (val < 0 && base == 10)
		size++;
	val = (val < 0) ? -val : val;
	while (val >= base)
	{
		val /= base;
		size++;
	}
	return (size);
}

char			*ft_itoa_base(int value, int base)
{
	char	*str;
	char	*bs;
	long	val;
	int		size;

	bs = "0123456789ABCDEF";
	val = value;
	size = ft_size(val, base);
	str = (char *)malloc(sizeof(char) * (size + 1));
	str[size] = '\0';
	val = (val < 0) ? -val : val;
	if (val == 0)
		str[0] = '0';
	while (val > 0)
	{
		str[--size] = bs[val % base];
		val /= base;
	}
	str[0] = (str[0]) ? str[0] : '-';
	return (str);
}
