  4 void    *ft_memset(void *str, int c, size_t n)
  5 {
  6         long unsigned int       i;
  7         unsigned char *new_str = (unsigned char *)str;
  8 
  9         i = 0;
 10         while(new_str[i] && i < n)
 11         {
 12                 new_str[i] = c;
 13                 i ++;
 14         }
 15         return (str);
 16 }

