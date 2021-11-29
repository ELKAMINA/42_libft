/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:09:15 by ael-khat          #+#    #+#             */
/*   Updated: 2021/11/29 11:09:23 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	*ft_memchr(const void *memoryblock, int searchedChar, size_t size)
{
	unsigned char *data;
	size_t	i;

	data = (unsigned char *)memoryblock;
	i = 0;
	while (data[i] && i < size)
	{
		if (data[i] ==  searchedChar)
			return (&data[i]);
		i++;
	}
	return (NULL);
}
