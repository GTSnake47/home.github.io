char	*ft_strcapitalize(char	*str)
{
	unsigned int	i; unsigned int	nw;

	i = 0; nw = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		if (nw && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			nw = 0;
		}
		else if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
		{
			nw = 1;
		}
		i++;
	}
	return (str);
}
