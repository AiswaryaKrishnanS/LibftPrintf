/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:03:48 by asajitha          #+#    #+#             */
/*   Updated: 2023/11/01 18:48:50 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

int	print_hex_low(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 0)
		count += ft_print_neg(n);
	if (n < 16)
	{
		if (n < 10)
		{
			ft_putchar(n + 48);
			count++;
		}
		else
		{
			ft_putchar('A' + (n - 10));
			count++;
		}
	}
	else
	{
		count += print_hex_low (n / 16);
		count += print_hex_low (n % 16);
	}
	return (count);
}

// int main ()
// {
// 	print_hex_low(5678);
// 	printf("\n%x",5678);
// }