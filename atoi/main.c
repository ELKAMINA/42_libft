#include "../libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	r;

	i = 0;
	j = 0;
	r = 0;
	while (str[i] == '\v' || str[i] == '\n' || str[i] == '\t' || str[i] == '\f'|| 			str[i] == '\r' || str[i] == ' ')
		i ++;
	 if (str[i] < 48 || str[i] > 57)
		return (0);
	 else
	{ 
		 while (str[i] > 47 && str[i] < 58 )
		{
			r = r * 10 + (str[i] - 48);	
                	i ++;
			
	 	}
	 	return(r);
	 }
}


int	main()
{
	char	str[] = "     5bbv47   888___dkkd";
        char    str2[] = "    5bbv47   888___dkkd";

	printf("true atoi = %d ----\n", atoi(str));
	printf("Myatoi = %d ----- \n", ft_atoi(str2));
}
       

