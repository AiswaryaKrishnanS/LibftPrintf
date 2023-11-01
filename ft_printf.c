/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 21:17:38 by asajitha          #+#    #+#             */
/*   Updated: 2023/11/01 19:04:02 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

int	print_params(const char c_specifier, va_list ap)
{
	int	count;

	count = 0;
	if (c_specifier == 'c')
		count = print_char(va_arg(ap, int));
	else if (c_specifier == 's')
		count = print_str(va_arg(ap, char *));
	else if (c_specifier == 'p')
		count = print_void(va_arg(ap, unsigned long long int));
	else if (c_specifier == 'd' || c_specifier == 'i')
		count = print_int(va_arg(ap, int));
	else if (c_specifier == 'u')
		count = print_unsigned(va_arg(ap, unsigned int));
	else if (c_specifier == 'x' || c_specifier == 'X')
	{
		if (c_specifier == 'x' )
			count = print_hex_up(va_arg(ap, unsigned int));
		else if (c_specifier == 'X')
			count = print_hex_low(va_arg(ap, unsigned int));
	}
	else
		count += write (1, &c_specifier, 1);
	return (count);
}

int	ft_printf(const char *params, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, params);
	count = 0;
	while (*params)
	{
		if (*params == '%')
			count += print_params(*(++params), ap);
		else
			count += write(1, params, 1);
		++params;
	}
	va_end(ap);
	return (count);
}

// int main()
// {
// 	printf("%d\n", printf("%x\n", -15));
// 	ft_printf("%d\n", ft_printf("%x\n", -15));
// }
