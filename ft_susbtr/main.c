#include "../libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t 	i;

	i = 0;
	copy = (char *)malloc(len * sizeof(char)) + 1;
	if (copy == NULL)
		return NULL;
	while(s[start] && i < len)
	{
		copy[i] = s[start];
		i ++;
		start ++;
	}
	return (copy);
}

int     main()
{
        char    str[] = "HELLOOOOOOOOCAVA";

        printf("Test = %s ----\n", ft_substr(str, 2, 3));
}

