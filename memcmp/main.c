#include <string.h>
#include <stdio.h> 
int	ft_memcmp(const	void *pointer1, const	void *pointer2, size_t size)
{
	unsigned char *data1;
	unsigned char *data2;
	size_t	i;

	data1 = (unsigned	char *)pointer1;
	data2 = (unsigned	char *)pointer2;
	i = 0;
	while (size && data1[i] && data2[i] && i < size)
	{
		if (data1[i] == data2[i])
			i ++;
		else 
			return (data1[i] - data2[i]);
	}
	return (0);
}
	

int	main()
{
	char	str1[]= "souris";
	char	str2[]= "souris";
	printf("je suis la vraie =  %d -----\n", memcmp(str1, str2, 6));
	printf("je suis la mienne =  %d -----\n", ft_memcmp(str1, str2, 6));
	return 0;
}
