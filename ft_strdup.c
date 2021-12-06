/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:17:57 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:19:32 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	i;

	i = 0;
	copy = (char *)malloc(ft_strlen(s1) * sizeof(char)) + 1;
	if (copy == NULL)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i ++;
	}
	return (copy);
}
