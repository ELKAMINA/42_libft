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
