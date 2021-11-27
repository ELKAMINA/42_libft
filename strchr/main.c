#include<string.h>
#include <stdio.h>
char	*ft_strchr(const char *s, int c)
{
	char *sent;
	unsigned char character;
	int	i;

	sent = (char *)s;
	character = (unsigned char)c;
	i = 0;
	while (sent[i])
	{
		if (sent[i] == character)
			return (&sent[i]);
		i ++;
	}
	return (NULL);
}


int main ()
{
	char phrase[] =  "Diego de la Vega";
	char	c;

	c = 'd';
	printf(" Vraie fonction = %s-----\n", strchr(phrase, c));
	printf(" MA fonction = %s-----\n", ft_strchr(phrase, c));
}

