/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:35:25 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:36:34 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hays;

	i = 0;
	j = 0;
	hays = (char *)haystack;
	if (needle[0] == '\0')
		return (hays);
	while (needle[i])
	{
		while (hays[j] && j < len)
		{
			if (needle[i] == hays[j])
				break ;
			j++;
		}
		if (j == len)
			return (NULL);
		i++;
		j++;
	}
	return (&hays[j - ft_strlen(needle)]);
}
