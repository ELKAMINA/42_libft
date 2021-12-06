/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:49:48 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 16:53:40 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	long unsigned int	i;
	unsigned char		*new_str;

	new_str = (unsigned char *)str;
	i = 0;
	while (new_str[i] && i < n)
	{
		new_str[i] = c;
		i ++;
	}
	return (str);
}
