int	ft_toupper	(int	character)
{
	unsigned char car;

	car = (unsigned char) character;
	if (car >= 'a' &&  car <= 'z')
		car = car - 32;
	return (car);
}
