#include <stdio.h>
#include <unistd.h>

void	fr_sort_int_tab(int *tab, int size)
{
	int j = 0;
	while(j < size-1)
	{
		int k = 0;
		while(k < size-j-1)
		{
			if(tab[k] > tab[k+1])
			{
				int temp = tab[k];
				tab[k] = tab[k+1];
				tab[k+1] = temp;
			}
			k++;
		}
		j++;
	}
}

int	main(void)
{
	int table[] = {8, 6, 12, 0, 2, 4, 10};
	int length = 7;
	int i = 0;

	fr_sort_int_tab(table, length);
	while(i < length)
	{
		printf("%d\n", table[i]);
		i++;
	}
	return (0);
}
