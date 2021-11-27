#include <ctype.h>
#include <stdio.h>

int	ft_toupper	(int	character)
{
	unsigned char car;

	car = (unsigned char) character;
	if (car >= 'a' &&  car <= 'z')
		car = car - 32;
	return (car);
}


int	main ()
{
	char	character;

	character = '\n';
	printf("caractere transformé avec vraie fonction  %c ---\n", toupper(character));
	printf("caractere transformé avec ma fonction  %c ---\n", ft_toupper(character));
}
