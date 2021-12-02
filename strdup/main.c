#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char	*)malloc(ft_strlen(s1) * sizeof(char)) + 1;
	if (copy = NULL)
		return NULL;
	while(s1[i])
	{
		copy[i] = s1[i];
		i ++;
	}
	return (copy);
}


