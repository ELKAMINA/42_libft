/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:23:41 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:27:04 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int	d_len;
	int	s_len;
	int	gap;
	int	i;
	int	offset;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	offset = d_len;
	gap = size - (offset + 1);
	i = 0;
	while (gap >= 1 && src[i])
	{
		dest[offset] = src[i];
		i ++;
		gap --;
		offset ++;
	}
	dest[offset] = '\0';
	if (gap >= 0)
		return (d_len + s_len);
	else
		return (size + s_len);
}
