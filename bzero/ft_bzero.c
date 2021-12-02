#include "../libft.h"

void    ft_bzero(void *s, size_t n)
{
        unsigned char *string;
        size_t i;

        string = (unsigned char *)s;
        i = 0;
        while(string[i] && i < n)
        {
                string[i] = '\0';
                i++;
        }
}

