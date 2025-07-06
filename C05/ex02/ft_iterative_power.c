#include <stdio.h>

int	ft_iterative_power(int	nb, int	power)
{
	unsigned int	p;

	p = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * p;
		power--;
	}
	return (nb);
}

int	main(void)
{
	printf("0 to the power of 0 is %d\n", ft_iterative_power(0, 0));
	printf("0 to the power of 0 is %d\n", ft_iterative_power(1, 0));
	printf("0 to the power of 0 is %d\n", ft_iterative_power(2, 1));
	printf("0 to the power of 0 is %d\n", ft_iterative_power(3, 2));
	printf("0 to the power of 0 is %d\n", ft_iterative_power(5, 3));
}
