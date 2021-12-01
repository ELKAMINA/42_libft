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
	int	d_len;
	int	s_len;
	int	gap;
	int	i;
	int	offset;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	gap = size - (offset + 1);
	i = 0;
	while (gap >= 1 && src[i])
	{	
		dest[offset] = src[i];
		i ++;
		gap --;
		offset++;
	 }
	dest[offset] = '\0';	
	if (gap  >= 0)
		return (d_len + s_len);
	else
		return (size + s_len);
}

int	main ()
{
	//char	dest[] = "Hellocava";
	//char	src[] = "bienet";
	char    dest[] = "ABCDEFGH";
    	char    src[] = "1234";

	//printf("Résultat strlcat= %lu----- \n", strlcat(dest, src, 4));
	printf("Résultat ft_strlcat= %lu----- \n", ft_strlcat(dest, src, 11));
	printf("dest= %s\n,src = %s =========\n", dest, src);
}
