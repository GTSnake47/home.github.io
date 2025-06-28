#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int sample;

	sample = 0;
	printf("before: %d\n", sample);
	ft_ft(&sample);
	printf("after: %d\n", sample);
	return (0);
}
