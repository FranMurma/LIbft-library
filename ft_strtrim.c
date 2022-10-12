/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmurcia <frmurcia@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 17:03:29 by frmurcia          #+#    #+#             */
/*   Updated: 2022/10/04 20:12:51 by frmurcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	char		*s2;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) -1;
	while ((ft_strchr(set, s1[start])) && s1[start])
		start++;
	while ((ft_strchr(set, s1[end])) && end >= 0)
		end--;
	s2 = ft_substr(s1, start, (end - start + 1));
	if (!s2)
		return (NULL);
	return (s2);
}
/*
	s2 = malloc(sizeof(char) * (end - start));
	if (!s2)
		return (NULL);
	while (s2[cont] && s1[start + cont])
	{
		s2[cont] = s1[start + cont];
		cont++;
	}
	s2[cont] = '\0';
*/
