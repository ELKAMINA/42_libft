/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 16:15:03 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 16:26:54 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int character)
{
	if ((character > 47 && character < 58)
		|| (character > 64 && character < 90)
		|| (character > 96 && character < 123))
		return (1);
	else
		return (0);
}
