#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	unsigned int *new_str;
	
	new_str = (unsigned  int *)str;
	i = 0;
	while(new_str[i] && i < n)
	{
		new_str[i] = c;
		i ++;
	}
	return (str);
}

int	main()
{
	int str= 1600;
	printf("%d je suis la vraie", (int	*)memset(str, 6, 4));
	//printf("%s je suis la fausse ", (char *)ft_memset(str, '&', 4));
}	

