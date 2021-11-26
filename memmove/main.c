#include <stdio.h>
#include <string.h>
/*
void 	*ft_memmove(void *dest, void *src, size_t n)
{
	unsigned char *casted_dest;	
	unsigned char *casted_src;

	casted_dest = (unsigned char *)dest;
	casted_src = (unsigned char *)src;
*/	

/*
void    *ft_memcpy(void *dest, void *src, size_t size)
{
        char    *casted_dest;
        char    *casted_src;
        size_t  i;

        i = 0;
        casted_dest = (char     *)dest;
        casted_src = (char      *)src;
        while (i < size)
        {
                casted_dest[i] = casted_src[i];
                i ++;
        }
        return (dest);
}
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
        unsigned char *casted_dest;     
        unsigned char *casted_src;
	size_t i;

        casted_dest = (unsigned char *)dest;
        casted_src = (unsigned char *)src;
	if (casted_dest < casted_src)
	{
		i = n - 1;
	
		while (casted_src[i] && casted_dest[i])
		{
			casted_dest[i] = casted_src[i];
			i --;
		}
	}
	else 
	{
		i = 0;
		while (i < n)
		{
			casted_dest[i] = casted_src[i];
			i++;
		}
	}
	return (dest);
}	
   


int main ()
{
   char dest[]  = "SAFONCTION";
   char *src = &dest[2];
   //char copie[] = "salutcava";
   //char *exemple  = &copie[3];
   char dest2[]  = "MAFONCTION";
   char *src2 = &dest2[2];

   printf("avant memmove -- dest = %s et src = %s\n", dest, src);
   memmove(dest, src, 2);
   printf("apres memmove dest = %s, src = %s --\n", dest, src);
   printf("avant ft__ dest = %s, src = %s --\n", dest2, src2);
   ft_memmove(dest2, src2, 2);
   printf("apresmemove2  dest = %s, src = %s --\n", dest2, src2);
   return(0);
}
