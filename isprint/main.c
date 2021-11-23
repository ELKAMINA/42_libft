#include <stdio.h>
#include <ctype.h>

int     ft_isprint (int character)
{
        if ((character >= 0  && character < 33) || character ==  127)
                return 0;
        else
                return 1;
}


int main()
{
        printf("%d ft\n", ft_isprint('a'));
        printf("%d vraie", isprint('a'));

}

