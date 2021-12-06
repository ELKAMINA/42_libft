/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:16:21 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:17:18 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char			*sent;
	unsigned char	character;
	int				i;

	sent = (char *)s;
	character = (unsigned char)c;
	i = 0;
	while (sent[i])
	{
		if (sent[i] == character)
			return (&sent[i]);
		i ++;
	}
	return (NULL);
}
