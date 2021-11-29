#include "../libft.h"

char	*ft_strnstr(const	char	*big, const	char	*little, size_t len)
{
	char	*m;
	char	*s;
	size_t	i;
	size_t	j;
	size_t	l;
	size_t	k;

	m = (char	*)big;
	s = (char	*)little;
	k = 0;
	i = 0;
	j = 0;
	while (m[i] && i < len)
	{
		while (s[j])
		{
			if (m[i] == s[j])
			{
				k = j;
				i ++;
				l ++;
			}
			i++;
		}
		j++;
	}
	if (l == ft_strlen(s))
		return (&m[k]);
	return (&m[k]);
}


int	main()
{
	const char str1[]= "lolip";
	const char str2[]= "oli";
	printf("je suis la vraie = %s ---\n", strnstr(str1, str2, 5));
	printf("je suis la fausse = %s ---\n", ft_strnstr(str1, str2, 5));
	return 0;
}
