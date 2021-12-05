#include "../libft.h"

/*static long		ft_digitnb(int n)
{
	long		size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

static int		ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

size_t  ft_strlen (const char	*str)
{
        size_t i;

        i = 0;
        while(str[i])
         i++;
        return i;
}

char			*ft_itoa(int n)
{
	long		n_long;
	long		length;
	char		*fresh;

	n_long = n;
	length = ft_digitnb(n_long);
	fresh = (char *)malloc((length + 1) * sizeof(char));
	printf("je suis un test = %zu", ft_strlen(n_long));
	if (!fresh)
		return (NULL);
	fresh[length] = '\0';
	length--;
	if (n_long < 0)
		n_long = -n_long;
	while (length >= 0)
	{
		fresh[length] = (n_long % 10) + '0';
		length--;
		n_long /= 10;
	}
	if (ft_sign(n))
		fresh[0] = '-';
	return (fresh);
}
*/
int sizeof_myint(long n)
{
	long	res;

	res = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		++res;
	while (n != 0)
	{
		n /= 10;
		++res;
	}
	return (res);
}

char	*ft_itoa(int	n)
{
	char	*tab;
	int	index_tab;
	long	n_long;

	n_long = n;
	index_tab = sizeof_myint(n_long) - 1;
	tab = (char *)malloc((sizeof_myint(n) * sizeof(char)) + 1);
	if (tab ==  NULL)
		return (NULL);
	if (n_long < 0)
	{
		tab[0] = '-';
		n_long *= -1;
	}
	while (n_long >= 1)
	{
		tab[index_tab] = (n_long % 10) + 48;
		n_long /= 10;
		index_tab --;
	}
	return (tab);
}


int	main()
{
	printf("Mu number in character = %s", ft_itoa(83773737));
}
