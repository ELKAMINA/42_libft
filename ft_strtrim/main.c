#include "../libft.h"
// je compare l debut et la fin de la chaine et je recupere le milieu de la chaine

size_t  ft_strlen (const char   *str)
{
        size_t i;

        i = 0;
        while(str[i])
         i++;
        return i;
}

//compare le debut de la chaine avec set

int	ft_strnccmp(const char	*s1, const char 	*s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (1);
		i ++;
	}
	return (0);
}

//compare la fin de chaine

int	ft_strcmprev(const char	*s1, const char 	*s2)
{
	int	ind_s1;
	int	 ind_s2;

	ind_s1 =  ft_strlen(s1) - 1;
	ind_s2 =  ft_strlen(s2) - 1;
	
	while ((s1[ind_s1] && s2[ind_s2]) &&  ind_s2 >= 0 )
	{
		if (s1[ind_s1] != s2[ind_s2])
			return (1);
		ind_s1--;
		ind_s2--;
	}
	return (0);
}

/*int	getnuset(char const *s1, char const *set)
{
	int	i;
int	j;

	i = 0;
	j = 0;
	 while (s1[j])
        {
			if (s1[j] == set[0])
				i++;
			j++;
        }
	return (i);
}
*/

char	*ft_strtrim(char        const *s1, char const   *set)
{
	 char    *conc;
	 size_t	j;
	 size_t len_set;

	j = 0;
	len_set =  ft_strlen(set);
	if (ft_strnccmp(s1, set, len_set) == 0 && ft_strcmprev(s1, set) == 0)
	{
		conc = (char	*)malloc((ft_strlen(s1) - (len_set*2)) * 
			sizeof (char)) + 1;
		if    (conc == NULL)
		      return NULL;
		while (s1[j] && j < (ft_strlen(s1) - (ft_strlen(set)*2))) 
		{
			conc[j] = s1[len_set];
            j++;
            len_set++;
		}
	return (conc);
	}
	else 
		return (NULL);
}

int     main()
{
        char    str1[] = "??HELLO??  //";

        printf("Test=%s----\n", ft_strtrim(str1, "??  //"));
}
