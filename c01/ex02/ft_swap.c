#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

int	main(void)
{
	int x = 0;
	int y = 1;

	ft_swap(&x, &y);
	printf("x after is: %d\n", x);
	printf("y after is: %d\n", y);
	return (0);
}
