#include <stdio.h>
#include <ctype.h>

int     ft_isalnum (int character)
{
        if ((character > 47  && character < 58) || (character > 64  && character < 90) || (character > 96  && character < 123))
                return 1;
        else
                return 0;
}


int main()
{
        printf("%d ft\n", ft_isalnum('\n'));
        printf("%d vraie", isalnum('\n'));

}

