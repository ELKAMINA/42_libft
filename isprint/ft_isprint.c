int     ft_isprint (int character)
{
        if ((character >= 0  && character < 33) || character ==  127)
                return 0;
        else
                return 1;
}

