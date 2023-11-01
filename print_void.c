/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_void.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:02:35 by asajitha          #+#    #+#             */
/*   Updated: 2023/10/25 19:16:02 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_adrs(unsigned long long int ptr)
{
	int	count;

	count = 0;
	if (ptr < 16)
	{
		if (ptr < 10)
		{
			ft_putchar(ptr + 48);
			count++;
		}
		else
		{
			ft_putchar('a' + (ptr - 10));
			count++;
		}
	}
	else
	{
		count += print_adrs (ptr / 16);
		count += print_adrs (ptr % 16);
	}
	return (count);
}

int	print_void(unsigned long long int ptr)
{
	int	count;

	count = 0;
	count += print_str("0x");
	count += print_adrs(ptr);
	return (count);
}

// int main()
// {
//     unsigned long int *x;
//     printf("Address of x: %p\n", (void *)&x);
//     print_void((unsigned long int)&x);
// 	putchar('\n');
//     return 0;
// }
