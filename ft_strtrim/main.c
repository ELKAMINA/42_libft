#include "../libft.h"

size_t  ft_strlen (const char   *str)
{
        size_t i;

        i = 0;
        while(str[i])
         i++;
        return i;
}


char	*ft_strtrim(char        const *s1, char const   *set)
{
        char    *conc;
        int  i;
        int  j;
	char	*sign;
	char	*source;

	sign = (char *)set;
	source = (char *)s1;
        i = 0;
        j = 0;
        while (source[j])
        {
		if (source[j] == sign[0])
			i++;
                j ++;
        }
        j = 0;
	conc = (char	*)malloc((ft_strlen(s1) - i) * sizeof (char));
	if    (conc == NULL)
 	      return NULL;
	i = 0;
	while (source[i])
        {
		if (source[i] == sign[0])
			i++;
		else
		{
			conc[j] = source[i];
               		j++;
               		i++;
		}
        }
        conc[j] = '\0';
        return (conc);
}

int     main()
{
        char    str1[] = "    HELLO ";

        printf("Test=%s----\n", ft_strtrim(str1, " "));
}

