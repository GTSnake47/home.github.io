#include <stdio.h>

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
}

int	main(void)
{
	printf("0 to the power of 0 is %d\n", ft_recursive_power(0, 0));
	printf("0 to the power of 0 is %d\n", ft_recursive_power(1, 0));
	printf("0 to the power of 0 is %d\n", ft_recursive_power(2, 1));
	printf("0 to the power of 0 is %d\n", ft_recursive_power(3, 2));
	printf("0 to the power of 0 is %d\n", ft_recursive_power(5, 3));
}
