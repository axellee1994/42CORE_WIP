/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 15:43:22 by axlee             #+#    #+#             */
/*   Updated: 2023/09/24 11:57:11 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthexa(unsigned long n, char format)
{
	int				i;
	char			*base;
	unsigned int	num;
	unsigned int	base_len;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	num = (unsigned int)n;
	base_len = ft_strlen(base);
	if (num >= (base_len - 1))
	{
		i += ft_puthexa(num / base_len, format);
		i += ft_putchar(*base + (num % base_len));
	}
	return (i);
}
