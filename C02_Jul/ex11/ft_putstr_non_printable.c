#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char	r[3];

	i = 0;
	r[0] = '\\';
	while (str[i] != '\0')
	{
		if (!(str[i] >= 0 && str[i] <= 31))
			write(1, &str[i], 1);
		else
		{
			r[1] = str[i] / 16;
			r[2] = str[i] % 16;
			if (r[2] > 15)
				r[2] += 87;
		}
		i++;
	}
}
