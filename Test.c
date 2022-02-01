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
