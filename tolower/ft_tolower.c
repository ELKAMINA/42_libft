int	ft_tolower	(int	character)
{
	unsigned char car;

	car = (unsigned char) character;
	if (car >= 'A' &&  car <= 'Z')
		car = car + 32;
	return (car);
}

