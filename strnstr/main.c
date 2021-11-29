#include "../libft.h"

size_t	ft_strlen(const	char	*str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

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
	while (s[j])
	{
		while (m[i] && i < len)
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
	printf("je suis K = %zu\n", k);
	return (&m[k - (j - 1)]);
}


int	main()
{
	const char str1[]= "Foo Bar Baz";
	const char str2[]= "Bar";
	printf("je suis la vraie = %s ---\n", strnstr(str1, str2, 7));
	printf("je suis la fausse = %s ---\n", ft_strnstr(str1, str2, 7));
	return 0;
}
