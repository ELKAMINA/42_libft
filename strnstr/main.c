#include "../libft.h"

size_t	ft_strlen(const	char	*str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
/*
char	*ft_strnstr(const	char	*big, const	char	*little, size_t len)
{
	char	*m;
	char	*s;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	k = 0;

	m = (char	*)big;
	s = (char	*)little;
	if (*s == '\0')
		return (m);
	while (s[j] )
	{
		while (m[i])
		{
			if (s[j] == m[i])
			{
				k = i;
				break;
			}
			else 
			i ++;
		}
		j++;
		i++;
	}
	if ()
		return (NULL);
	else
		return (&m[k - (j - 1)]);
}

*/

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





int	main()
{
	const char haystack[]= "Bonjour";
	const char needle[]= "";
	const char str1[]= "Bonjour";
        const char str2[]= "";
	printf("je suis la vraie = %s ---\n", strnstr(haystack, needle, 5));
	printf("je suis la fausse = %s ---\n", ft_strnstr(str1, str2, 5));
	return 0;
}
