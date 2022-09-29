/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:07:06 by frmurcia          #+#    #+#             */
/*   Updated: 2022/09/29 19:15:44 by frmurcia         ###   ########.fr       */
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
}

size_t  ft_words(char const *s, char c)
{
    int cont_s;
    int words;

    cont_s = 0;
    words = 0;
	while (s[cont_s])
    if ((s[cont_s + 1] == c || s[cont_s + 1] = '\0') && s[cont_s] != c)
        words++;
}

char	**ft_split(char const *s, char c)
{
	int	cont_s;
	int	cont_n;
	int	words;
	int	start;

	cont_s = 0;
	cont_n = 0;
	start = 0;
	words = ft_words(s, c);
	s_n = (char **) malloc(sizeof (char*) * (words + 1));
    if (!s_n[cont_n])
		ft_free(s_n);
	if ((s[cont_s] == c && s[cont_s + 1] != c) || (s[cont_s + 1] = '\0'))
		start = cont_s + 1;
	cont_s++;
	s_n[cont_n] = ft_substr(s, start, cont_s - start - 1);
	cont_n++;


