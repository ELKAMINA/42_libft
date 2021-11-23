#include <stdio.h>
#include <ctype.h>

int     ft_isdigit (int character)
{
        if (character > 47  && character < 58)
                return 1;
        else
                return 0;
}


int main()
{
        printf("%d ft\n", ft_isdigit('p'));
        printf("%d vraie", isdigit('u'));

}

