/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:21:09 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:22:36 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*conc;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	conc = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char)) + 1;
	if (conc == NULL)
		return (NULL);
	while (s1[j])
	{
		conc[j] = s1[j];
		j ++;
	}
	while (s2[i])
	{
		conc[j] = s2[i];
		j++;
		i++;
	}
	conc[j] = '\0';
	return (conc);
}
