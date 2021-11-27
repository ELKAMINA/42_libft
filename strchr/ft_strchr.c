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
