/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaskhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:40:54 by tbaskhan          #+#    #+#             */
/*   Updated: 2022/02/23 17:36:29 by tbaskhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	get_size_u(unsigned long long int nb, int base)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb)
	{
		nb = nb / base;
		i++;
	}
	return (i);
}

int	ft_print_u(unsigned int nb)
{
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_print_u(nb / 10);
		ft_print_u(nb % 10);
	}
	return (get_size_u(nb, 10));
}
