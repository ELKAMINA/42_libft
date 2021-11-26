#include <stdio.h>
#include <string.h>



void	*ft_memcpy(void *dest, void *src, size_t size)
{
	char	*casted_dest;
	char	*casted_src;
	size_t	i;

	i = 0;
	casted_dest = (char	*)dest;
	casted_src = (char	*)src;
	while (i < size)
	{
		printf("%ld\n", i);
		casted_dest[i] = casted_src[i];
		i ++;
	}
	return (dest);
}

int	main()
{
	char src[] = "Je suis ton pere";
	char dest[100]="";

	printf("%s--- je suis la vraie\n",(char *)memcpy(dest, src, 5));
	printf("%s--- je suis la fausse\n", (char *)ft_memcpy(dest, src, 5));
		}		
