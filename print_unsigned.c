/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:03:31 by asajitha          #+#    #+#             */
/*   Updated: 2023/10/25 20:09:54 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"

int	print_unsigned(unsigned int p)
{
	int	count;

	count = 0;
	if (p < 10)
	{
		ft_putchar(p + 48);
		count++;
	}
	else
	{
		count += print_unsigned (p / 10);
		count += print_unsigned (p % 10);
	}
	return (count);
}

// int main()
// {
// 	printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
// 	print_unsigned(42949);
// 	ft_putchar('\n');
// 	printf("%u", 42949);
// }
