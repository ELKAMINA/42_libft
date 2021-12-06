/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:00:54 by ael-khat          #+#    #+#             */
/*   Updated: 2021/12/06 18:30:11 by ael-khat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	long unsigned int	i;
	long unsigned int	j;

	i = 0;
	j = 1;
	while (s[i] && c != '\0')
	{
		if (s[i] == c)
			j++;
		i++;
	}
	return (j);
}

int	is_mychar(char c, char s)
{
	if (c == s)
		return (1);
	else
		return (0);
}

char	*to_malloc(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !is_mychar(str[i], c))
		i ++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && !is_mychar(str[i], c))
	{
		word[i] = str[i];
		i ++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;
	int		i;

	i = 0;
	j = 0;
	tab = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && is_mychar(s[i], c))
			i++;
		if (s[i] && !is_mychar(s[i], c))
		{
			tab[j] = to_malloc((s + i), c);
			if (tab[j] == NULL)
			{
				while (j--)
					free(tab[j]);
				free(tab);
				return (NULL);
			}
			j++;
		}
		while (s[i] && !(is_mychar(s[i], c)))
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
