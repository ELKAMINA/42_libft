/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:42:43 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 16:44:41 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, void *src, size_t size)
{
	char	*casted_dest;
	char	*casted_src;
	size_t	i;

	i = 0;
	casted_dest = (char *)dest;
	casted_src = (char *)src;
	while (i < size)
	{
		casted_dest[i] = casted_src[i];
		i ++;
	}
	return (dest);
}
