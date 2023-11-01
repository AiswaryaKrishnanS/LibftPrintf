/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 20:05:14 by asajitha          #+#    #+#             */
/*   Updated: 2023/09/15 20:06:05 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_hex_up(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count += ft_print_neg(n);
	if (n < 16)
	{
		if (n < 10)
		{
			ft_putchar(n + '0');
			count++;
		}
		else
		{
			ft_putchar('a' + (n - 10));
			count++;
		}
	}
	else
	{
		count += print_hex_up (n / 16);
		count += print_hex_up (n % 16);
	}
	return (count);
}

// int main()
// {
// 	int	k = print_hex_up(-10);
// 	printf("%d", k);
// 	return 0;
// }