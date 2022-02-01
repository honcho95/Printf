/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaskhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:46:11 by tbaskhan          #+#    #+#             */
/*   Updated: 2022/01/21 14:57:38 by tbaskhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_i(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 9)
	{
		ft_print_i(nb / 10);
		ft_print_i(nb % 10);
	}
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}
