/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 04:21:40 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/19 05:20:02 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_type(char c, va_list arg)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		counter += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		counter += ft_putstr(va_arg(arg, char *));
	else if (c == 'x' || c == 'X')
		counter += ft_hexa(va_arg(arg, unsigned int), c);
	else if (c == 'd' || c == 'i')
		counter += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		counter += ft_unsi(va_arg(arg, unsigned int));
	else if (c == 'p')
		counter += ft_ptr((unsigned long)va_arg(arg, void *));
	if (c == '%')
	{
		write(1, "%", 1);
		counter++;
	}
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		counter;
	int		i;

	counter = 0;
	i = 0;
	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			counter += check_type(format[++i], arg);
		else
		{
			counter += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(arg);
	return (counter);
}

// int main ()
// {
//  int a = 42;
//     int *ptr = &a;
//     int *null_ptr = NULL;

//     // ft_printf only implements %p, everything else prints literally
//     ft_printf("ft_printf with pointer: %d\n", 5);
// 	printf("printf with pointer: %p\n", ptr);

//     return (0);
// }