/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaskhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:44:14 by tbaskhan          #+#    #+#             */
/*   Updated: 2022/01/19 16:02:38 by tbaskhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x_len(int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb /= 16;
	}
	return (len);
}

void	ft_x(int nb)
{
	if (nb >= 16)
	{
		ft_p(nb / 16);
		ft_p(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + '0'), 1);
		else
			ft_putchar_fd((nb - 10 + 'a'), 1);
	}
}

int	ft_print_x(int nb)
{
	if (nb == 0)
		write (1, "0", 1);
	else
		ft_x(nb);
	return (ft_x_len(nb));
}
