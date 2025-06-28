#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	t_one = *a;
	int t_two = *b;

	*a = t_one/t_two;
	*b = t_one%t_two;
}

int	main(void)
{
	int	x = 10;
	int y = 3;

	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}
