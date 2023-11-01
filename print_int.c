/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:02:57 by asajitha          #+#    #+#             */
/*   Updated: 2023/11/01 18:21:48 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

int	print_neg(void)
{
	ft_putchar('-');
	return (1);
}

int	print_int(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write (1, "-2", 2);
		n = 147483648;
		count += 2;
	}
	if (n < 0)
	{
		count += print_neg();
		n = n * -1;
	}
	if (n < 10)
	{
		ft_putchar(n + 48);
		count++;
	}
	else
	{
		count += print_int (n / 10);
		count += print_int (n % 10);
	}
	return (count);
}
// int main()
// {
// 	print_int(65);	
// }