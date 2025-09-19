/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:50:19 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/19 03:10:44 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_ptr_helper(unsigned long n)
{
	char	*type;
	int		counter;

	counter = 0;
	type = "0123456789abcdef";
	if (n >= 16)
		counter += ft_ptr_helper(n / 16);
	counter += ft_putchar(type[n % 16]);
	return (counter);
}

int	ft_ptr(unsigned long n)
{
	int		counter;

	counter = 0;
	if (n == 0)
		return (ft_putstr("(nil)"));
	counter += ft_putstr("0x");
	counter += ft_ptr_helper(n);
	return (counter);
}
