/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_flag_plus_space.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayguillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 14:55:35 by ayguillo          #+#    #+#             */
/*   Updated: 2018/12/21 15:37:51 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	print_flag_plus_space_uns(int sign, int zero, ULL *ret)
{
	if (zero == 0 && sign == 1)
	{
		ft_putchar('+');
		(*ret)++;
	}
	else if (zero == 0 && sign == 2)
	{
		ft_putchar(' ');
		(*ret)++;
	}
}

void	print_flag_plus_space1_uns(int sign, int zero, ULL *var, ULL *ret)
{
	if (zero == 1 && sign == 1)
	{
		ft_putchar('+');
		(*ret)++;
	}
	if (zero == 1 && sign == 1)
	{
		ft_putchar('-');
		(*ret)++;
		*var = -(*var);
	}
}
