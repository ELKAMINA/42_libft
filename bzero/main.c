#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char *string;
	size_t i;

	string = (unsigned char *)s;
	i = 0;
	while(string[i] && i < n)
	{
		string[i] = '\0';
		i++;
	}
}

int	main ()
{
	char	ptr[]= "Hello how are you?";

	//printf("%s je suis la vraie", bzero(ptr, 4));
	printf("%s  je suis la fausse",(char *)ft_bzero(ptr, 4));
}

