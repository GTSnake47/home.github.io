char	*ft_strncat(char	*dest, char	*src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	if (nb == 0)
		return (dest);
	while (dest[i])
		i++;
	while (src[n] && (n < nb))
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
