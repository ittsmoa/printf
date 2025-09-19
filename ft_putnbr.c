/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:38:15 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/19 05:03:52 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		counter;
	long	long_n;

	long_n = n;
	counter = 0;
	if (n < 0)
	{
		counter += ft_putchar('-');
		long_n = long_n * -1;
	}
	if (long_n > 9)
	{
		counter += ft_putnbr(long_n / 10);
		counter += ft_putnbr(long_n % 10);
	}
	if (long_n <= 9 && long_n >= 0)
	{
		counter += ft_putchar(long_n + '0');
	}
	return (counter);
}
