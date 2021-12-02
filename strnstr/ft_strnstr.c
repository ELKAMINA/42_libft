#include "../libft.h"

size_t	ft_strlen(const	char	*str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;

	i = 0;
	j = 0;
	hays = (char	*)haystack;
	if (needle[0] == '\0')
		return (hays);
	while (needle[i])
	{
		while (hays[j] && j < len)
		{
			if (needle[i] == hays[j])
				break;
			j++;
		}
		if ( j == len )
			return (NULL);
		i++;
		j++;
	}
	return (&hays[j - ft_strlen(needle)]);
}
