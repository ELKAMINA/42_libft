#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	long unsigned int	i;
	unsigned char *new_str = (unsigned char *)str;

	i = 0;
	while(new_str[i] && i < n)
	{
		new_str[i] = c;
		i ++;
	}
	return (new_str);
}

int	main()
{
	char *str="Je suis hamida";
	//printf("%s je suis la vraie", (char *)memset(str, '$', 4));
	printf("%s je suis la fausse ", (char *)ft_memset(str, '&', 4));
}	

