/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:42:53 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:44:30 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int character)
{
	unsigned char	car;

	car = (unsigned char)character;
	if (car >= 'A' && car <= 'Z')
		car = car + 32;
	return (car);
}
