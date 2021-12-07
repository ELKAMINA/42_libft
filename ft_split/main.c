#include "../libft.h"

/*char	*ft_strchr(const char *s, int c)
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
*/

/*int	is_index (char	*s, char	c)
{
	int	index;
	char	*titr;

	ptr = ft_strchr(s, c);
	index = (int)(ptr - s);
	return (index);
}
*/

static char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i ++;
	}
	free(tab);
	return (NULL);
}

static int	count_words(char const	*s, char	c)
{
	long unsigned int	i;
	long unsigned int	j;
	

	i = 0;
	j = 1;
	while (s[i] && c != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

static int	is_mychar(char	c, char	s)
{
	if (c == s)
		return (1);
	else 
		return (0);
}

static char	*to_malloc (char const	*str, char c)
{
	char	*word;
	int	i;

	i = 0;
	while (str[i] && !is_mychar(str[i], c))
		i ++;
	word = (char	*)malloc((i + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_mychar(str[i], c))
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const	*s, char	c)
{
	char **tab;
	int	j;
	int	i;

	i = 0;
	j = 0;
	if (!(tab = malloc((count_words(s, c) + 1) * sizeof(char *))));
	//if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && is_mychar(s[i], c))
			i++;
		if (s[i] && !is_mychar(s[i], c))
		{
			if(!(tab[j] = to_malloc((s + i), c)));
			//if (tab[j] == NULL)
				ft_malloc_error(&tab[j]);
			j++;
		}
		while (s[i] && !(is_mychar(s[i], c)))
			i++;
	}
	tab[j] = NULL;
	return (tab);
}


int	main(void)
{
	char	str[] =  "Holaqoatal";

	printf("je suis l'index de la premiere occurence = %s", ft_split(str, 'a')[1]);
}
