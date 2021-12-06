/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:41:21 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:42:17 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const *s, unsigned int start, size_t len)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)malloc(len * sizeof (char)) + 1;
	if (copy == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		copy[i] = s[start];
		i ++;
		start ++;
	}
	return (copy);
}
