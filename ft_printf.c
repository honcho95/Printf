/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbaskhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:18:37 by tbaskhan          #+#    #+#             */
/*   Updated: 2022/01/31 15:51:31 by tbaskhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convs(va_list args, char convs)
{
	int	rdir;

	rdir = 0;
	if (convs == 'c')
		rdir += ft_print_c(va_arg(args, int));
	else if (convs == 's')
		rdir += ft_print_s(va_arg(args, char *));
	else if (convs == 'd')
		rdir += ft_print_d(va_arg(args, int));
	else if (convs == 'i')
		rdir += ft_print_i(va_arg(args, int));
	else if (convs == 'u')
		rdir += ft_print_u(va_arg(args, unsigned int));
	else if (convs == 'p')
		rdir += ft_print_p(va_arg(args, unsigned long long));
	else if (convs == 'x')
		rdir += ft_print_x(va_arg(args, unsigned int));
	else if (convs == 'X')
		rdir += ft_print_upx(va_arg(args, unsigned int));
	else if (convs == '%')
		rdir += ft_print_percent();
	return (rdir);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		res;
	int		i;

	i = 0;
	res = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			res += ft_convs(args, str[i + 1]);
			i++;
		}
		else
		{
			write (1, &str[i], 1);
			res++;
		}
		i++;
	}
	va_end(args);
	return (res);
}

#include "printf.h"
#include <stdio.h>

int	main()
{
	int	test_p;

	test_p = 12;
	char	*test = "salut";
	char c = 'e';

	printf("%d", printf("%d %i",-30,-30));
	printf("\n \n \n");
	ft_printf("%d", ft_printf("%d %i",-30,-30));

	printf("\n \n \n \n \n \n");

	ft_printf("===============Test p1\n");
	ft_printf("%p\n", test);
	printf("%p\n", test);
	ft_printf("===============Test p2\n");
	ft_printf("%p\n", &c);
	printf("%p\n", &c);
	ft_printf("=================Test s\n");
	ft_printf("%s\n", "test de mon printf");
	printf("%s\n", "test du vrai printf");
	ft_printf("==================Test d\n");
	ft_printf("%d\n", -30);
	printf("%d\n", -30);
	ft_printf("=================Test u\n");
	ft_printf("%u\n", (unsigned int)789654123);
	printf("%u\n", (unsigned int)789654123);
	ft_printf("================Test x\n");
	ft_printf("%x\n", 2147413647);
	printf("%x\n", 2147413647);
	ft_printf("================Test upx\n");
	ft_printf("%X\n", 2147413647);
	printf("%X\n", 2147413647);
}
