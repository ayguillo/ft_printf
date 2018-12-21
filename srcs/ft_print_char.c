/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:18:03 by tcherret          #+#    #+#             */
/*   Updated: 2018/12/21 11:44:09 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_char(va_list ap, t_flag flag)
{
	char	var;
	int		nb;

	nb = 1;
	var = va_arg(ap, int);
	flag_space(flag.space, nb, flag.zero, &nb);
	ft_putchar(var);
	if (flag.sign == 1 || flag.sign == 3)
	{
		flag.sign == 1 ? ft_putchar('+') : ft_putchar('-');
		nb++;
	}
	var = (char)var;
	return (nb);
}
