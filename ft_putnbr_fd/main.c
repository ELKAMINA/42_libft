#include "../libft.h"

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

void	ft_putstr_fd(char	*s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i ++;
	}
}

char	*ft_itoa(int	n)
{
	char	*tab;
	int	index_tab;
	long	n_long;

	n_long = n;
	index_tab = sizeof_myint(n_long) - 1;
	tab = (char *)malloc((sizeof_myint(n) * sizeof(char) + 1));
	if (tab == NULL)
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

void	ft_putnbr_fd(int	n, int	fd)
{
	char	*str;

	str = ft_itoa(n);
	ft_putstr_fd(str, fd);
}
