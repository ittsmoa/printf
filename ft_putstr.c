/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:33:17 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/19 05:29:44 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int		count;

	count = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (s[count])
	{
		write(1, &s[count], 1);
		count++;
	}
	return (count);
}
