/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 18:54:54 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/19 02:28:05 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa(unsigned int n, char c)
{
	char	*type;
	int		counter;

	counter = 0;
	if (c == 'x')
		type = "0123456789abcdef";
	else
		type = "0123456789ABCDEF";
	if (n < 16)
	{
		counter += ft_putchar(type[n]);
		return (counter);
	}
	else if (n >= 16)
		counter += ft_hexa(n / 16, c);
	counter += ft_putchar(type[n % 16]);
	return (counter);
}
