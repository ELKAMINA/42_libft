/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:45:04 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 16:49:17 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dest, const void	*src, size_t	n)
{
	unsigned char	*casted_dest;
	unsigned char	*casted_src;
	size_t			i;

	casted_dest = (unsigned char *)dest;
	casted_src = (unsigned char *)src;
	if (casted_dest < casted_src)
	{
		i = n - 1;
		while (casted_src[i] && casted_dest[i])
		{
			casted_dest[i] = casted_src[i];
			i --;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			casted_dest[i] = casted_src[i];
			i++;
		}
	}
	return (dest);
}
