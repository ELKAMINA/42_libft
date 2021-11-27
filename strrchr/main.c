#include<string.h>
#include <stdio.h>
char	*ft_strrchr(const char *s, int c)
{
	char *sent;
	unsigned char character;
	int	i;
	int j;

	sent = (char *)s;
	character = (unsigned char)c;
	i = 0;
	j = -1;
	while (sent[i])
	{
		if (sent[i] != character)
			i++;
		else
		{
			j = i;
			i++;
		}
	}
	 if (j == -1)
		return (NULL);
	return (&sent[j]);
}


int main ()
{
	char phrase[] =  "Diego di la Viga";
	char	c;

	c = ' ';
	printf(" Vraie fonction = %s-----\n", strrchr(phrase, c));
	printf(" MA fonction = %s-----\n", ft_strrchr(phrase, c));
}

