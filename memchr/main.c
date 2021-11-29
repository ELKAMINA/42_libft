#include<stdio.h>
#include <string.h>

void	*ft_memchr(const void *memoryblock, int searchedChar, size_t size)
{
	unsigned char *data;
	size_t	i;

	data = (unsigned char *)memoryblock;
	i = 0;
	while (data[i] && i < size)
	{
		if (data[i] ==  searchedChar)
			return (&data[i]);
		i++;
	}
	return (NULL);
}

int main()
{
	char data[] = {10, 20, 30, 60, 80};
	printf("je suis le resultat = %s---\n",(char *)memchr(data, 60, 5));
	printf("La mienne = %s---\n",(char *)ft_memchr(data, 60, 5));
	return 0;
}
