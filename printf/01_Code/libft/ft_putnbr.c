/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:03:21 by axlee             #+#    #+#             */
/*   Updated: 2023/09/29 16:26:43 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbrlen(long n)
{
	int	i;

	if (n < 0)
	{
		n = ft_abs(n);
		i = 1;
	}
	else
		i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	int	nbr_len;

	nbr_len = ft_nbrlen(n);
	ft_putnbr_fd(n, 1);
	return (nbr_len);
}

/*int	main(void)
{
	int	num;
	int	length;

	printf("Enter an integer: ");
	scanf("%d", &num);
	length = ft_putnbr(num);
	printf("The length of %d is %d \n", num, length);
	return (0);
}*/
