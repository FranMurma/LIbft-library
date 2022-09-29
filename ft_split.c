/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:06 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/29 20:16:41 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **str_n)
{
	int	cont;

	cont = 0;
	while (str_n[cont])
	{
		free (str_n[cont]);
		cont++;
	}
	free (str_n);
}

int	ft_words(char const *s)
{
    int cont_s;
    int words;

    cont_s = 0;
    words = 0;
	while (s[cont_s])
	{
		if ((s[cont_s + 1] == c || s[cont_s + 1] = '\0') && s[cont_s] != c)
			words++;
		cont_s++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{i
	int	cont_s;
	int	cont_n;
	int	words;
	int	start;

	cont_s = 0;
	cont_n = 0;
	start = 0;
	words = ft_words(s);
	s_n = (char **) malloc(sizeof (char*) * (words + 1));
    if (!s_n[cont_n])
		return (NULL);
	while (s_n[cont_s])
	{
		if ((s[cont_s] == c && s[cont_s + 1] != c) || (s[cont_s + 1] = '\0'))
		{
			s_n[cont_n] = ft_substr(s, start, cont_s - start + 1);
			if (!s_n[cont])
			{
				ft_free(s_n);
				return (NULL);
			}
		}
	
		cont_s++;
	}
		
