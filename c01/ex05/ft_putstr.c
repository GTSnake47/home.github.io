#include <unistd.h>

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char sample[] = "My name is Ahmed\n";
	ft_putstr(sample);
	return (0);
}
