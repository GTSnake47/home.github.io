#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while(i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	if(src[0] == '\0')
		return (0);
	while(src[i] != '\0')
	{
		i++;
	}
	return (i);
}
