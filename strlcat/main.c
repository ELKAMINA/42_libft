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

/*size_t	ft_strlcat(char	*dest, const	char *src, size_t size)
{
	size_t	i;
	size_t	reste;
	size_t	d_len;

	i = 0;
	printf("sizeof dest aka newstr from ft_strlcat = %lu---------\n", sizeof(int));
	d_len = ft_strlen(dest);
	reste = ((size - 1) - d_len);
	//printf("reste = %lu ----\n", reste);
	if (size <= sizeof(dest))
	{
		while (src[i] && i < reste)
		{
			dest[d_len] = src[i];
			i ++;
			d_len ++;
		}
		dest[d_len] = '\0';
		//printf("dlen = %lu", d_len);
		return (d_len + ft_strlen(src));
	}
	return (0);
}
*/

int	main ()
{
	char	oldstr[] = "ABCD";
	char	newstr[] = "1234";

	printf("Résultat strlcat= %lu----- \n", strlcat(newstr, oldstr, 9));
	printf("dest= %s\n,src = %s\n", newstr, oldstr);
}
