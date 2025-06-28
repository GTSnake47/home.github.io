#include <stdio.h>
#include <unistd.h>

void	fr_rev_int_tab(int *tab, int size)
{
	int start = 0;
	int end = size - 1;

	while(start<(size/2))
	{
		int tem = tab[start];
		tab[start] = tab[end];
		tab[end] = tem;
		start++;
		end--;
	}
}

int	main(void)
{
	int table[] = {2, 4, 6, 8, 10, 12};
	int length = 6;
	int i = 0;

	fr_rev_int_tab(table, length);
	while(i < length)
	{
		printf("%d\n", table[i]);
		i++;
	}
	return (0);
}
