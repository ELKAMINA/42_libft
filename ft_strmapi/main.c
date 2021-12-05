#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*copy;
	int		i;

	if (!s || !f)
		return (NULL);
	if (!(copy = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	index = 0;
	while (s[i])
	{
		copy[i] = f(i, s[i]);
		++i;
	}
	copy[i] = '\0';
	return (copy);
}

int	main(void)
{
	printf("Fonction strmapi", ft_strmapi("Hellow"));
}
