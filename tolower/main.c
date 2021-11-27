#include <ctype.h>
#include <stdio.h>

int	ft_tolower	(int	character)
{
	unsigned char car;

	car = (unsigned char) character;
	if (car >= 'A' &&  car <= 'Z')
		car = car + 32;
	return (car);
}


int	main ()
{
	char	character;

	character = 'P';
	printf("caractere transformé avec vraie fonction  %c ---\n", tolower(character));
	printf("caractere transformé avec ma fonction  %c ---\n", ft_tolower(character));
}
