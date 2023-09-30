/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:58:59 by axlee             #+#    #+#             */
/*   Updated: 2023/09/26 15:39:30 by axlee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Description: Calculates the absolute value of a long integer 'n'.
** @n: The long integer for which the absolute value is calculated.
** Return value: Returns the absolute value of 'n'.
*/

#include "libft.h"

long	ft_abs(long n)
{
	long	nb;

	nb = 1;
	if (n < 0)
		nb = nb * -n;
	else
		nb = nb * n;
	return (nb);
}

/*int	main(void)
{
	long	num;
	long	abs_value;

	printf("Enter a long integer: ");
	scanf("%ld", &num);

	abs_value = ft_abs(num);
	printf("The absolute value of %ld is %ld\n", num, abs_value);
	return (0);
}*/

/* Code Purpose:
 *
 * This code calculates the absolute value of a long integer and a main
 * function to find and print the absolute vaue of a user-input long
 * integer
 *
 * Code Breakdown:
 *
 * It initalize a 'nb' value to 1
 *
 * If 'n' is negative, it multplies 'nb' by '-n' to get the absolute value
 *
 * If 'n' is non-negative, it multiplies 'nb' by 'n'
 *
 * It the returns the calculated absolute value
 *
 * Main function:
 *
 * It declares variables num and abs_value to store the user's input
 * and the calculated absolute value.
 *
 * It prompts the user to enter a long integer and reads it using scanf.
 *
 * It calls the ft_abs function to calculate the absolute value.
 *
 * It prints the original number and its absolute value.
 */
