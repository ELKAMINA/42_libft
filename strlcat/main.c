#include "../libft.h"

size_t  ft_strlen (const char	*str)
{
        size_t i;

        i = 0;
        while(str[i])
         i++;
        return i;
}
// Ma fonction vide la source donc faudra utiliser strlcpy

size_t	ft_strlcat(char	*dest, const	char *src, size_t size)
{
	size_t	i;
	size_t	destlen;
	size_t	reste;

	i = 0;
	destlen = ft_strlen(dest);
	reste = ((size - 1) - destlen);
	if (size > destlen)
	{
		while (src[i] && i < reste)
		{
			dest[destlen] = src[i];
			i ++;
			destlen ++;
		}
		dest[destlen] = '\0';
	}
	printf("length of dst = %ld", destlen);
	return (destlen + ft_strlen(src));
}

int	main ()
{
	//char	src[]="Je suis la";
	//char	dest[]="Hello";
	char	str[]="Je suis la";
	char	destin[]="Hello";
	//printf("Vraie fonction =  %ld ----\n", strlcat(dest, src, 7));
	//printf("dest apres vraie fonction= src = %s, dest = %s ----\n",src, dest);
	printf("Ma fonction =  %ld ----\n", ft_strlcat(destin, str, 7));
	printf("dest apres MA fonction= src = %s,  dest = %s ----\n",str , destin);

}
