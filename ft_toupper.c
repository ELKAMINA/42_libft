/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:45:19 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 17:49:45 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int character)
{
	unsigned char	car;

	car = (unsigned char)character;
	if (car >= 'a' && car <= 'z')
		car = car - 32;
	return (car);
}
