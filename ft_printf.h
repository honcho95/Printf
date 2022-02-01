/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaskhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:36:45 by tbaskhan          #+#    #+#             */
/*   Updated: 2022/01/21 16:19:40 by tbaskhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_convs(va_list args, char convs);
int		ft_print_c(char c);
int		ft_print_d(int nb);
int		ft_putnbr(int nb);
int		len_of_num(int nb);
int		ft_print_i(int nb);
int		ft_p_len(intptr_t nb);
void	ft_p(intptr_t nb);
int		ft_print_p(unsigned long long p);
int		ft_print_percent(void);
int		ft_print_s(char *s);
int		ft_print_u(unsigned int nb);
int		ft_x_len(int nb);
void	ft_x(int nb);
int		ft_print_x(int nb);
int		ft_upx_len(int nb);
void	ft_upx(int nb);
int		ft_print_upx(int nb);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);

#endif
