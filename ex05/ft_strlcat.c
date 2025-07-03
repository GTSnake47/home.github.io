unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	if (size == 0)
		return (i);
	while (dest[i])
		i++;
	while (src[n] && (n < (size - 1)))
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (i);
}
