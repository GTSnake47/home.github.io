#include <stdio.h>

void	ft_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int sample;

	sample = 0;
	int *pointer1 = &sample;
	int **pointer2 = &pointer1;
	int ***pointer3 = &pointer2;
	int ****pointer4 = &pointer3;
	int *****pointer5 = &pointer4;
	int ******pointer6 = &pointer5;
	int *******pointer7 = &pointer6;
	int ********pointer8 = &pointer7;
	int *********pointer9 = &pointer8;

	printf("before: %d\n", sample);
	ft_ft(pointer9);
	printf("after: %d\n", sample);
	return (0);
}
