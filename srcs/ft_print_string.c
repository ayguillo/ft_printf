/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:09:00 by tcherret          #+#    #+#             */
/*   Updated: 2018/12/21 12:10:42 by ayguillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_print_string(va_list ap, t_flag flag)
{
	char	*str;
	int		nb;

	str = va_arg(ap, char*);
	if (str && str[0] != '\0')
		nb = ft_strlen(str);
	else
		nb = 0;
	if (flag.precis > nb)
		flag.precis = nb;
	else if (flag.precis > 0 && flag.precis != 0)
		nb = flag.precis;
	else if (flag.precis == -5)
	{
		flag.precis = 0;
		nb = 0;
	}
	else 
		flag.precis = nb;
	flag_space(flag.space, nb, flag.zero, &nb);
	str != NULL ? ft_putnstr(str, flag.precis) : ft_putstr("null");
	if (str == NULL)
		nb = 6;
	if (flag.sign == 1 || flag.sign == 3)
	{
		flag.sign == 1 ? ft_putchar('+') : ft_putchar('-');
		nb++;
	}
	return (nb);
}
