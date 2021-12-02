#include "../libft.h"

int	ft_strncmp(const char	*s1, const char 	*s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}



int	main ()
{
	char s1[] = "heyyou";
	char s2[] = "hey";
	char s3[] = "heyyou";
        char s4[] = "hey";

	
	printf("Vraie fonction = %d --- \n", strncmp(s1, s2, 20));
	printf("Ma fonction = %d ----\n", ft_strncmp(s3, s4, 20));
}


