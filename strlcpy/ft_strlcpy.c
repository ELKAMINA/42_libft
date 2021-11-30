#include "../libft.h"

size_t  ft_strlen (const char	*str)
{
        size_t i;

        i = 0;
        while(str[i])
         i++;
        return i;
}

size_t	ft_strlcpy(char	*dest, const	char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i ++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
