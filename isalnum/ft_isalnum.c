int     ft_isalnum (int character)
{
        if ((character > 47  && character < 58) || (character > 64  && character < 90) || (character > 96  && character < 123))
                return 1;
        else
                return 0;
}

