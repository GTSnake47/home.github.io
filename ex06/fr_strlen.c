#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int count = 0;
	while(*str){
		str++;
		count++;
	}
	return count;
}

int	main(void)
{
	char sample[] = "My name is Ahmed\n";
	int strlen = ft_strlen(sample);
	printf("%d\n", strlen);
	return (0);
}
