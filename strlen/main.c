#include <stdio.h>
#include <string.h>

size_t	ft_strlen (const char* str)
{
	size_t i;

	i = 0;
	while(str[i])
	 i++;
	return i;	
}


int main()
{
	char *str="JE suis amina";
        printf("%ld ft\n", ft_strlen(str));
        printf("%ld vraie", strlen(str));

}

