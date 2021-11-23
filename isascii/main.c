#include <stdio.h>
#include <ctype.h>

int     ft_isascii (int character)
{
        if (character >= 0  && character < 128)
                return 1;
        else
                return 0;
}


int main()
{
        printf("%d ft\n", ft_isascii('@'));
        printf("%d vraie", isascii('@'));

}

