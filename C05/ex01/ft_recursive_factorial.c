#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("f of 0 is %d\n", ft_recursive_factorial(0));
	printf("f of 1 is %d\n", ft_recursive_factorial(1));
	printf("f of 2 is %d\n", ft_recursive_factorial(2));
	printf("f of 3 is %d\n", ft_recursive_factorial(3));
	printf("f of 4 is %d\n", ft_recursive_factorial(4));
	printf("f of 5 is %d\n", ft_recursive_factorial(5));
	return (0);
}
