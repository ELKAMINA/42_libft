#include <stdio.h>
#include <ctype.h>

int     ft_isalpha (int character)
{ 
        if ((character > 64  && character < 90) || (character > 96  && character < 123) )
                return 1;
        else
                return 0;
}


int main()
{
	printf("%d ft\n", ft_isalpha('\n'));
        printf("%d vraie", isalpha('\n'));

}


