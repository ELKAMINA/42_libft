void    *ft_memmove(void *dest, const void *src, size_t n)
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

