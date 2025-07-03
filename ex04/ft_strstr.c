char	*ft_strstr(char	*str, char	*to_find)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
    while (str[i] != '\0')
	{
        n = 0;
        while (to_find[n] != '\0' && str[i + n] != '\0' && str[i + n] == to_find[n])
            n++;
        if (to_find[n] == '\0')
            return &str[i];
        i++;
    }
	return ('\0');
}
