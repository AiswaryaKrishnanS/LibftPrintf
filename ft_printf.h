/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asajitha <asajitha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 21:44:39 by asajitha          #+#    #+#             */
/*   Updated: 2023/11/01 18:22:58 by asajitha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(const char *params, ...);
int		print_char(char c);
int		print_hex_low(unsigned int n);
int		print_hex_up(unsigned int n);
int		print_int(int n);
int		print_str(char *s);
int		print_unsigned(unsigned int p);
int		print_void(unsigned long long int ptr);
int		ft_print_neg(unsigned int n);
void	ft_putchar(char c);
#endif