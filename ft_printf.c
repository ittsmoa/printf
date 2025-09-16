/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moatieh <moatieh@student.42amman.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 04:21:40 by moatieh           #+#    #+#             */
/*   Updated: 2025/09/15 04:21:40 by moatieh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int checkType (char c, va_list arg)
{
	int	counter;

	counter = 0;
	if (c == 'c')
		

}


int	ft_printf(const char *format, ...)
{
    va_list arg;
    int counter;
    int	i;

    counter = 0;
	i = 0
    va_start(arg, format);
    if (format == NULL)
        return 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
			counter += checkType(format[i + 1], arg);
		else
			counter += ft_putchar(format[i]);
		i++;
	}
	va_end(arg);
	return counter;
}




int main ()
{
   int x =  printf("hello world world%X", 5);
   printf("%i", x);
    return 0; 
}