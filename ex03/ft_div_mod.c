#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int	main(void)
{
	int	x = 10;
	int y = 3;
	int result = 0;
	int reminder = 0;

	ft_div_mod(x, y, &result, &reminder);
	printf("%d\n", result);
	printf("%d\n", reminder);
	return (0);
}
