#include "../libft.h"

char	*ft_strjoin(char	const *s1, char const	*s2)
{
	char	*conc;
	size_t 	i;
	size_t	j;

	i = 0;
	j = 0;
	conc = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1;
	if (conc == NULL)
		return NULL;
	while (s1[j])
	{
		conc[j] = s1[j];
		j ++;
	}
	while (s2[i])
	{
		conc[j] = s2[i];
		j++;
		i++;
	}
	conc[j] = '\0';
	return (conc);
}
